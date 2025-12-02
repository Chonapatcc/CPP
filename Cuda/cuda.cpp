%%writefile helloworld.cu
#include<cuda.h>
#include <stdio.h>
#include <stdlib.h> 
__global__ void vector_add(int * d_a,int *d_b, int *d_c,int n)
{
    printf("block %d,thread %d\n",blockIdx.x,threadIdx.x);

    int idx = blockDim.x * blockIdx.x +threadIdx.x;
    if (idx < n)
    {
        d_c[idx] = d_a[idx] + d_b[idx];
    }
}


int main()
{
// allocate and initialize host memory

    int n = 100;
    int *h_a, *h_b, *h_c;

    h_a = (int*)malloc(n * sizeof(int));
    h_b = (int*)malloc(n * sizeof(int));
    h_c = (int*)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; ++i)
    {
        h_a[i] = i;        // e.g., 0, 1, 2, ...
        h_b[i] = i * 2;    // e.g., 0, 2, 4, ...
    }

// Part 1
// allocate device memory
    int *d_a, *d_b, *d_c;
    cudaMalloc((void**)&d_a, n*sizeof(int));
    cudaMalloc((void**)&d_b, n*sizeof(int));
    cudaMalloc((void**)&d_c, n*sizeof(int));
// copy a and b to device memory
    cudaMemcpy(d_a, h_a, n*sizeof(int), cudaMemcpyHostToDevice);
    cudaMemcpy(d_b, h_b, n*sizeof(int), cudaMemcpyHostToDevice);

// Part 2
    vector_add<<<10,10>>>(d_a,d_b,d_c,n);
    cudaDeviceSynchronize();
// kernel launch code which let the device performs the actual vector addition
// Part 3
// copy c to host memory
    cudaMemcpy(h_c, d_c, n*sizeof(int), cudaMemcpyDeviceToHost);


// free device memory 

    printf("Vector Addition Results:\n");
    for (int i = 0; i < n && i < n; ++i)
    {
        printf("C[%d] = A[%d] + B[%d] = %d + %d = %d\n", i, i, i, h_a[i], h_b[i], h_c[i]);
    }

    cudaFree(d_a);
    cudaFree(d_b);
    cudaFree(d_c);

    free(h_a);
    free(h_b);
    free(h_c);
}