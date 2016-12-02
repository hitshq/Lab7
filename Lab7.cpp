#include <iostream>
#include<stdio.h>
#include<string.h>
#include<ctime>
#include <cstdlib>
#include<fstream>
#include<math.h>

using namespace std;

class shuru
{
    public:

        void zhengli(char shuruchuan[]);
        int num[100];
        int e;
        int tongji[100][3];
    private:
        int a;
        int b;
        int c;
        int d;
        int f;
        int co[100];

};
class shuchu
{
    public:
        void zhenglishuchu(int num[],int tong[100][3],int e);
        void fuzhishuchu(int num[],int tongji[][3],int e,int x,int y,int z);
    private:
        int g,h;
};
class fuzhi
{
    public:
        int xzhi,yzhi,zzhi;
        void zhi();
    private:
        int m;
        char fzhi[4];
        int zh[4];
};
class qiudao
{
    public:
        void dao(int num[],int tong[][3],int e);
    private:
        int j,l;
        char k;
};
class shur
{
    public:
        void jiaoyan(char shuruchuan[]);
    private:
        int q;

};
void qiudao::dao(int num[],int tong[100][3],int e)
{
    printf("请输入您想求导的未知数：");
    printf("\n");
    getchar();
    scanf("%c",&k);
    if(k=='x')
    {
        for(j=0;j<e-1;j++)
        {
            l=tong[j][0]-1;
            printf("%d*%d*x^%d*y^%d*z^%d+",num[j],tong[j][0],l,tong[j][1],tong[j][2]);
        }
        printf("%d*%d*x^%d*y^%d*z^%d",num[j],tong[j][0],l,tong[j][1],tong[j][2]);
    }
    if(k=='y')
    {
        for(j=0;j<e-1;j++)
        {
            l=tong[j][1]-1;
            printf("%d*x^%d*%d*y^%d*z^%d+",num[j],tong[j][0],tong[j][1],l,tong[j][2]);
        }
        printf("%d*x^%d*%d*y^%d*z^%d",num[j],tong[j][0],tong[j][1],l,tong[j][2]);
    }
    if(k=='z')
    {
        for(j=0;j<e-1;j++)
        {
            l=tong[j][2]-1;
            printf("%d*%d*x^%d*y^%d*z^%d+",num[j],tong[j][2],tong[j][0],l,tong[j][1],l);
        }
        printf("%d*%d*x^%d*y^%d*z^%d",num[j],tong[j][2],tong[j][0],tong[j][1],l);
    }
}
void fuzhi::zhi()
{
    printf("请输入您想赋值的未知数的值：");
    printf("\n");
    for(m=0;m<4;m++)
    {
        scanf("%c",&fzhi[m]);
        if(fzhi[m]=='$')
        {
            zh[m]=-1;
        }
        zh[m]=fzhi[m]-'0';
    }
    xzhi=zh[1];
    yzhi=zh[2];
    zzhi=zh[3];
}
void shuchu::zhenglishuchu(int num[],int tong[][3],int e)
{
    for(g=0;g<e-1;g++)
    {
        printf("%d*x^%d*y^%d*z^%d+",num[g],tong[g][0],tong[g][1],tong[g][2]);
    }
    printf("%d*x^%d*y^%d*z^%d",num[g],tong[g][0],tong[g][1],tong[g][2]);
};
void shuchu::fuzhishuchu(int num[],int tong[][3],int e,int x,int y,int z)
{
    if(x!=-1&&y!=-1&&z!=-1)
    {
        for(g=0;g<e-1;g++)
        {
            printf("%d*%d^%d*%d^%d*%d^%d+",num[g],x,tong[g][0],y,tong[g][1],z,tong[g][2]);
        }
        printf("%d*%d^%d*%d^%d*%d^%d",num[g],x,tong[g][0],y,tong[g][1],z,tong[g][2]);
    }
    if(x!=-1&&y!=-1&&z==-1)
    {
        for(g=0;g<e-1;g++)
        {
            printf("%d*%d^%d*%d^%d*z^%d+",num[g],x,tong[g][0],y,tong[g][1],tong[g][2]);
        }
        printf("%d*%d^%d*%d^%d*z^%d",num[g],x,tong[g][0],y,tong[g][1],tong[g][2]);
    }
    if(x!=-1&&y==-1&&z!=-1)
    {
        for(g=0;g<e-1;g++)
        {
            printf("%d*%d^%d*y^%d*%d^%d+",num[g],x,tong[g][0],tong[g][1],z,tong[g][2]);
        }
        printf("%d*%d^%d*y^%d*%d^%d",num[g],x,tong[g][0],tong[g][1],z,tong[g][2]);
    }
    if(x==-1&&y!=-1&&z!=-1)
    {
        for(g=0;g<e-1;g++)
        {
            printf("%d*x^%d*%d^%d*%d^%d+",num[g],tong[g][0],y,tong[g][1],z,tong[g][2]);
        }
        printf("%d*x^%d*%d^%d*%d^%d",num[g],tong[g][0],y,tong[g][1],z,tong[g][2]);
    }
    if(x==-1&&y==-1&&z!=-1)
    {
        for(g=0;g<e-1;g++)
        {
            printf("%d*x^%d*y^%d*%d^%d+",num[g],tong[g][0],tong[g][1],z,tong[g][2]);
        }
        printf("%d*x^%d*y^%d*%d^%d",num[g],tong[g][0],tong[g][1],z,tong[g][2]);
    }
    if(x==-1&&y!=-1&&z==-1)
    {
        for(g=0;g<e-1;g++)
        {
            printf("%d*x^%d*%d^%d*z^%d+",num[g],tong[g][0],y,tong[g][1],tong[g][2]);
        }
        printf("%d*x^%d*%d^%d*z^%d",num[g],tong[g][0],y,tong[g][1],tong[g][2]);
    }
    if(x!=-1&&y==-1&&z==-1)
    {
        for(g=0;g<e-1;g++)
        {
            printf("%d*%d^%d*y^%d*z^%d+",num[g],x,tong[g][0],tong[g][1],tong[g][2]);
        }
        printf("%d*%d^%d*y^%d*z^%d",num[g],x,tong[g][0],tong[g][1],tong[g][2]);
    }
};
void shur::jiaoyan(char shuruchuan[])
{
    if(shuruchuan[0]=='+'||shuruchuan[0]=='*'||shuruchuan[0]=='+'||shuruchuan[0]=='*')
    {
        printf("您输入的数据不符合规则！");
        exit(0);
    }
    for(q=0;q<100;q++)
    {
        if(shuruchuan[q]=='\n')
        {
            break;
        }
        if(shuruchuan[q]!='x'&&shuruchuan[q]!='y'&&shuruchuan[q]!='z'&&shuruchuan[q]!='1'&&shuruchuan[q]!='2'&&shuruchuan[q]!='3'&&shuruchuan[q]!='4'&&shuruchuan[q]!='5'&&shuruchuan[q]!='6'&&shuruchuan[q]!='7'&&shuruchuan[q]!='8'&&shuruchuan[q]!='9'&&shuruchuan[q]!='0'&&shuruchuan[q]!='+'&&shuruchuan[q]!='*'&&shuruchuan[q]!='-')
        {
            printf("您输入的数据不符合规则！");
            break;
            exit(0);

        }
        if(shuruchuan[q]=='x'||shuruchuan[q]=='y'||shuruchuan[q]=='z')
        {
            if(shuruchuan[q+1]=='x'||shuruchuan[q+1]=='y'||shuruchuan[q+1]=='z')
            {
                printf("您输入的数据不符合规则！");
                exit(0);
            }
        }
    }
};
void shuru::zhengli(char shuruchuan[])
{
    b=0;
    e=0;
    for(a=0;a<100;a++)
    {
        if(shuruchuan[a]=='1'||shuruchuan[a]=='2'||shuruchuan[a]=='3'||shuruchuan[a]=='4'||shuruchuan[a]=='5'||shuruchuan[a]=='6'||shuruchuan[a]=='7'||shuruchuan[a]=='8'||shuruchuan[a]=='9'||shuruchuan[a]=='0')
        {
            c=0;
            co[c]=shuruchuan[a]-'0';
            for(b=1;b<100;b++)
            {
                if(shuruchuan[a+b]=='1'||shuruchuan[a+b]=='2'||shuruchuan[a+b]=='3'||shuruchuan[a+b]=='4'||shuruchuan[a+b]=='5'||shuruchuan[a+b]=='6'||shuruchuan[a+b]=='7'||shuruchuan[a+b]=='8'||shuruchuan[a]=='9'||shuruchuan[a+b]=='0')
                {
                    c=c+1;
                    co[c]=shuruchuan[a+b]-'0';
                }
                else
                {
                    break;
                }
            }
            num[e]=0;
           for(d=c;d>=0;d--)
           {
               f=pow(10,d);
               num[e]=num[e]+co[c-d]*f;
           }
           a=a+b-1;
           e=e+1;
        }
    }

    for(a=0;a<100;a++)
    {
        for(b=0;b<3;b++)
        {
            tongji[a][b]=0;
        }
    }
    f=0;
    for(a=0;a<100;a++)
    {
        if(shuruchuan[a]=='\n')
        {
            break;
        }
        if(shuruchuan[a]=='x')
        {
            tongji[f][0]=tongji[f][0]+1;
        }
        if(shuruchuan[a]=='y')
        {
            tongji[f][1]=tongji[f][1]+1;
        }
        if(shuruchuan[a]=='z')
        {
            tongji[f][2]=tongji[f][2]+1;
        }
        if(shuruchuan[a]=='+')
        {
            f=f+1;
        }
    }

};
class kongzhi
{
    public:
        int command;
        void commander();
    private:
        int z;

};
void kongzhi::commander()
{
    printf("请输入命令：");
    printf("\n");
    printf("1.赋值");
    printf("\n");
    printf("2.求导");
    printf("\n");
    printf("3.结束");
    printf("\n");
    scanf("%d",&z);
    printf("\n");
    command=z;
}
int main()
{
    int i;
    char ch;
    char shuruchuan[100];
    printf("请输入表达式：");
    printf("\n");
    for(i=0;i<=100;i++)
    {
        scanf("%c",&ch);
        shuruchuan[i]=ch;
        if(ch=='\n')
        {
            break;
        }
    }
    shuru A;
    shur E;
    E.jiaoyan(shuruchuan);
    A.zhengli(shuruchuan);
    shuchu B;
    fuzhi C;
    qiudao D;
    kongzhi F;
    B.zhenglishuchu(A.num,A.tongji,A.e);
    printf("\n");
    for(i=0;i<100;i++)
    {
        F.commander();
        if(F.command==3)
        {
            exit(0);
        }
        else if(F.command==2)
        {
            D.dao(A.num,A.tongji,A.e);
            printf("\n");
        }
        else if(F.command==1)
        {
            C.zhi();

            B.fuzhishuchu(A.num,A.tongji,A.e,C.xzhi,C.yzhi,C.zzhi);
            printf("\n");
        }
    }

}
