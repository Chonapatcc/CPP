#include <iostream>
using namespace std;
int checkType(char charactor)
{
    int asciiNum = charactor- '\0';
    int code=0;
    if (asciiNum >= 65 and asciiNum <= 90)
    {
        //upper
        code =1 ;
    }
    else if (asciiNum >= 97 and asciiNum <= 122)
    {
        //lower
        code =2;
    }
    else if (asciiNum >= 48 and asciiNum <= 57)
    {
        //number
        code =3;
    }
    return code;
}
int main()
{
    string ID;
    cin >> ID ;
    int size = ID.length();
    int codes[size] ;
    for (int i =0 ; i < size ;i ++)
    {
        int code = checkType(ID[i]);
        codes[i] = code;
        //cout << ID[i]  << " " << ID[i] - '\0' <<endl;
    }
    string temp="";
    string space = " ";
    //int oldCode ;
    for(int i =0 ; i <size; i ++)
    {
        //cout << ID[i] << " = " << codes[i] << "to upper " << char(toupper(ID[i]))<<  endl;
        if(i==0)
        {
            temp+=toupper(ID[i]);
        }
        else if(i==size-1)
        {
            if(codes[i]==codes[i-1])
            {
                temp+=ID[i];
            }
            else
            {
                if(codes[i]==1)
                {
                    temp+=space +ID[i];
                }
                else if(codes[i]==2)
                {
                    if(codes[i-1]==1)
                    {
                        temp+=ID[i];
                    }
                    else
                    {
                        temp+=space +ID[i];
                    }
                }
                else if(codes[i]==3)
                {
                    temp+=space+ID[i];
                }
            }
        }
        else
        {
            if(codes[i-1] == codes[i] and codes[i] == codes[i+1])
            {
                temp+=ID[i];
            }
            else if(codes[i-1] ==codes[i])
            {
                if(codes[i]==1)
                {
                    if(codes[i+1]==2)
                    {
                        temp+=space+ID[i];
                    }
                    else
                    {
                        temp+=ID[i];
                    }
                }
                else
                {
                    temp+=ID[i];
                }
            }
            else if(codes[i] == codes[i+1])
            {
                if(codes[i-1]==3)
                {
                    temp+=space+(char)toupper(ID[i]);
                }
                else
                {
                    if(codes[i]!=2)
                    {
                        temp+=space;
                    }
                    temp+=ID[i];
                }
            }
            else
            {
      
                if(codes[i]==1)
                {
                    temp+=space +ID[i];
                }
                else if(codes[i]==2)
                {
                    if(codes[i-1]==1)
                    {
                        temp+=ID[i];
                    }
                    else
                    {
                        temp+=space+ID[i];
                    }
                }
                else if(codes[i]==3)
                {
                    temp+=space+ID[i];
                }
                
            }
            
        }
    }
    cout << temp <<endl;

}