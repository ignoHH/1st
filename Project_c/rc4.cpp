#include "rc4.h"

void rc4_ksa(int*s,char*key,int len)
{
    unsigned int i;
    int j=0;
    char k[256]={0};
    for(i=0;i<256;i++)
    {
        s[i]=i;
        k[i]=key[i%len];
    }
    for(i=0;i<256;i++)
    {
        int b=int(k[i]);
        j=(j+s[i]+b)%256;
        int tmp=0;
        tmp=s[j];
        s[j]=s[i];
        s[i]=tmp;
    }
}

void rc4_prga(int*s,char*data,int datalen)
{
    int i=0,j=0,t=0;
    int h;
    char tmp;
    for(h=0;h<datalen;h++)
    {
        i=(i+1)%256;
        j=(j+s[i])%256;
        tmp=s[j];
        s[j]=s[i];
        s[i]=tmp;
        t=(s[j]+s[i])%256;
        data[h]^=s[t];
    }
}

char* RC4(string skey, string st, char temp[500]){
    unsigned int i;
    int flag = 0;
    int s[256]={0};
    char key[256]={0};
    char data[1000]={0};
    for(i = 0; i < st.length(); i++){
        data[i] = st[i];
    }
    for(i = 0; i < skey.length(); i++){
        key[i] = skey[i];
    }
    int len = strlen(key);
    int datalen = strlen(data);
    rc4_ksa(s,key,len);
    rc4_prga(s,data,datalen);
    for(int i=0;i<datalen;i++){
        temp[flag++] = data[i];
    }
    return temp;
}
