#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
    int orderNum;
    char name[10];
    int manMark;
    int womanMark;
    struct program
    {
        int markOf50;
        int markOf100;
        int markOf200;
        int markOf400;
        int markOf1500;
        int markOfTiaogao;
        int markOfTiaoyuan;
        int markOfBiaoqiang;
    }p;
}SeqList;
void main()
{
    printf("************************************\n");
    printf("*                                  *\n");
    printf("*                                  *\n");
    printf("*    ��ӭʹ���˶���ɼ�����ϵͳ    *\n");
    printf("*                                  *\n");
    printf("*                                  *\n");
    printf("************************************\n");
    printf("************���ȳ�ʼ��**************\n");



    int i,j,k,m,n;
    printf("������ѧԺ����:");
    scanf("%d",&n);
    SeqList r[n+1];
    for(i=1;i<=n;i++)
    {
        printf("������Ժϵ���:\n");
        scanf("%d",&r[i].orderNum);
        printf("������Ժϵ����:\n");
        scanf("%s",r[i].name);
        r[i].manMark=0;
        r[i].womanMark=0;
    }
    printf("��ѡ���ܣ�\n1-������Ϣ 2-�޸ĸ�Ժϵ�ܳɼ� 3-ɾ����Ժϵ�ܳɼ� 4-�ɼ����� 5-�ɼ���ѯ  6�˳�\n");
    scanf("%d",&j);

    while(j!=6)
    {
        if(j==1)
        {
         for(i=1;i<=n;i++)
            {
                printf("Ժϵ��ţ�%d",r[i].orderNum);
                printf("  Ժϵ���ƣ�%s\n",r[i].name);
                printf("***********************\n");
                printf("��ѧԺ50m�����ܲ��ɼ�:");
                scanf("%d",&k);
                r[i].manMark=r[i].manMark+k;
                printf("��ѧԺ50mŮ���ܲ��ɼ�:");
                scanf("%d",&m);
                r[i].womanMark=r[i].womanMark+m;
                r[i].p.markOf50=k+m;


                printf("��ѧԺ100m�����ܲ��ɼ�:");
                scanf("%d",&k);
                r[i].manMark=r[i].manMark+k;
                printf("��ѧԺ100mŮ���ܲ��ɼ�:");
                scanf("%d",&m);
                r[i].womanMark=r[i].womanMark+m;
                r[i].p.markOf100=k+m;


                printf("��ѧԺ200m�����ܲ��ɼ�:");
                scanf("%d",&k);
                r[i].manMark=r[i].manMark+k;
                printf("��ѧԺ200mŮ���ܲ��ɼ�:");
                scanf("%d",&m);
                r[i].womanMark=r[i].womanMark+m;
                r[i].p.markOf200=k+m;


                printf("��ѧԺ400m�����ܲ��ɼ�:");
                scanf("%d",&k);
                r[i].manMark=r[i].manMark+k;
                printf("��ѧԺ400mŮ���ܲ��ɼ�:");
                scanf("%d",&m);
                r[i].womanMark=r[i].womanMark+m;
                r[i].p.markOf400=k+m;


                printf("��ѧԺ1500m�����ܲ��ɼ�:");
                scanf("%d",&k);
                r[i].manMark=r[i].manMark+k;
                printf("��ѧԺ1500mŮ���ܲ��ɼ�:");
                scanf("%d",&m);
                r[i].womanMark=r[i].womanMark+m;
                r[i].p.markOf1500=k+m;


                printf("��ѧԺ�������߳ɼ�:");
                scanf("%d",&k);
                r[i].manMark=r[i].manMark+k;
                printf("��ѧԺŮ�����߳ɼ�:");
                scanf("%d",&m);
                r[i].womanMark=r[i].womanMark+m;
                r[i].p.markOfTiaogao=k+m;


                printf("��ѧԺ������Զ�ɼ�:");
                scanf("%d",&k);
                r[i].manMark=r[i].manMark+k;
                printf("��ѧԺŮ����Զ�ɼ�:");
                scanf("%d",&m);
                r[i].womanMark=r[i].womanMark+m;
                r[i].p.markOfTiaoyuan=k+m;


                printf("��ѧԺ���ӱ�ǹ�ɼ�:");
                scanf("%d",&k);
                r[i].manMark=r[i].manMark+k;
                printf("��ѧԺŮ�ӱ�ǹ�ɼ�:");
                scanf("%d",&m);
                r[i].womanMark=r[i].womanMark+m;
                r[i].p.markOfBiaoqiang=k+m;
            }
        }

            if(j==2)
            {
                printf("***************************\n");
                printf("�����������޸ĵ�Ժϵ�Ĵ���:\n");
                scanf("%d",&k);
                printf("\n");
                printf("*�������޸�%sѧԺ�ĳɼ�*\n",r[k].name);
                printf("1-50m 2-100m 3-200m 4-400m \n5-1500m 6-���� 7-��Զ 8-��ǹ\n");
                printf("��ѡ�������޸ĵ���Ŀ��\n");
                scanf("%d",&i);
                printf("\n");

                while(i!=6)
                {
                    printf("��������º�ĳɼ�:");
                    if(i==1)
                    {
                        scanf("%d",&m);
                        r[k].p.markOf50=m;
                    }
                    else if(i==2)
                    {
                        scanf("%d",&m);
                        r[k].p.markOf100=m;
                    }
                    else if(i==3)
                    {
                        scanf("%d",&m);
                        r[k].p.markOf200=m;
                    }
                    else if(i==4)
                    {
                        scanf("%d",&m);
                        r[k].p.markOf400=m;
                    }
                    else if(i==5)
                    {
                        scanf("%d",&m);
                        r[k].p.markOf1500=m;
                    }
                    else if(i==6)
                    {
                        scanf("%d",&m);
                        r[k].p.markOfTiaogao=m;
                    }
                    else if(i==7)
                    {
                        scanf("%d",&m);
                        r[k].p.markOfTiaoyuan=m;
                    }
                    else if(i==8)
                    {
                        scanf("%d",&m);
                        r[k].p.markOfBiaoqiang=m;
                    }
                    else(i==9);
                        break;

                }
                    printf("\n");
                    printf("%sѧԺ�ɼ��޸ĺ��������£�\n",r[k].name);
                    printf("��ѧԺ50m�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOf50);
                    printf("��ѧԺ100m�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOf100);
                    printf("��ѧԺ200m�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOf200);
                    printf("��ѧԺ400m�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOf400);
                    printf("��ѧԺ1500m�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOf1500);
                    printf("��ѧԺ���ߵĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOfTiaogao);
                    printf("��ѧԺ��Զ�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOfTiaoyuan);
                    printf("��ѧԺ��ǹ�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOfBiaoqiang);
                    printf("��ѧԺ���ܳɼ��ǣ�");
                    printf("%d\n",r[k].p.markOf50+r[k].p.markOf100+r[k].p.markOf200+r[k].p.markOf400+r[k].p.markOf1500+r[k].p.markOfTiaogao+r[k].p.markOfTiaoyuan+r[k].p.markOfBiaoqiang);
                    printf("*********************\n");


            }
            if(j==3)
            {
                printf("����������ɾ����Ժϵ�Ĵ���:\n");
                scanf("%d",&k);
                printf("\n");
                printf("*������ɾ��%sѧԺ�ĳɼ�*\n",r[k].name);
                printf("1-50m 2-100m 3-200m 4-400m \n5-1500m 6-���� 7-��Զ 8-��ǹ\n");
                printf("��ѡ������ɾ������Ŀ��");
                scanf("%d",&i);
                while(i!=6)
                {

                    if(i==1)
                    {
                        r[k].p.markOf50=0;
                        printf("*%sѧԺ��50m�ɼ���ɾ��*\n",r[k].name);
                    }
                    else if(i==2)
                    {
                        r[k].p.markOf100=0;
                        printf("*%sѧԺ��100m�ɼ���ɾ��*\n",r[k].name);
                    }
                    else if(i==3)
                    {
                        r[k].p.markOf200=0;
                        printf("*%sѧԺ��200m�ɼ���ɾ��*\n",r[k].name);
                    }
                    else if(i==4)
                    {
                        r[k].p.markOf400=0;
                        printf("*%sѧԺ��400m�ɼ���ɾ��*\n",r[k].name);
                    }
                    else if(i==5)
                    {
                        r[k].p.markOf1500=0;
                        printf("*%sѧԺ��1500m�ɼ���ɾ��*\n",r[k].name);
                    }
                    else if(i==6)
                    {
                        r[k].p.markOfTiaogao=0;
                        printf("*%sѧԺ�����߳ɼ���ɾ��*\n",r[k].name);
                    }
                    else if(i==7)
                    {
                        r[k].p.markOfTiaoyuan=0;
                        printf("*%sѧԺ����Զ�ɼ���ɾ��*\n",r[k].name);
                    }
                    else if(i==8)
                    {
                        r[k].p.markOfBiaoqiang=0;
                        printf("*%sѧԺ�ı�ǹ�ɼ���ɾ��*\n",r[k].name);
                    }
                    else(i==9);
                        break;
                }
                    printf("\n");
                    printf("%sѧԺ�ɼ�ɾ�����������£�\n",r[k].name);
                    printf("��ѧԺ50m�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOf50);
                    printf("��ѧԺ100m�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOf100);
                    printf("��ѧԺ200m�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOf200);
                    printf("��ѧԺ400m�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOf400);
                    printf("��ѧԺ1500m�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOf1500);
                    printf("��ѧԺ���ߵĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOfTiaogao);
                    printf("��ѧԺ��Զ�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOfTiaoyuan);
                    printf("��ѧԺ��ǹ�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOfBiaoqiang);
                    printf("��ѧԺ���ܳɼ��ǣ�");
                    printf("%d\n",r[k].p.markOf50+r[k].p.markOf100+r[k].p.markOf200+r[k].p.markOf400+r[k].p.markOf1500+r[k].p.markOfTiaogao+r[k].p.markOfTiaoyuan+r[k].p.markOfBiaoqiang);
                    printf("*********************\n");
            }

            if(j==4)
            {
                int swap;
                int a,b;
                printf("1-���ܷ����� 2-�������ܷ����� 3-��Ů���ܷ�����\n");
                printf("��ѡ��һ������ʽ:\n");
                scanf("%d",&i);
                if(i==1)
                {
                    for(a=1;a<n;a++)
                    {
                        swap=0;
                        for(b=1;b<=n-a;b++)
                        {
                            if(r[b].manMark+r[b].womanMark<r[b+1].manMark+r[b+1].womanMark)
                            {
                                r[0]=r[b];
                                r[b]=r[b+1];
                                r[b+1]=r[0];
                                swap=1;
                            }
                        }
                        if(swap==0)
                     break;
                    }
                    printf("���ܷ������ĳɼ���Ϊ��\n");
                    printf("����  Ժϵ����   Ժϵ����   �ɼ�\n");
                    for(k=1;k<=n;k++)
                    {
                        printf(" %d      %d        %sѧԺ    %d\n",k,r[k].orderNum,r[k].name,r[k].p.markOf50+r[k].p.markOf100+r[k].p.markOf200+r[k].p.markOf400+r[k].p.markOf1500+r[k].p.markOfTiaogao+r[k].p.markOfTiaoyuan+r[k].p.markOfBiaoqiang);
                    }
                }
               else if(i==2)
                {
                    for(a=1;a<n;a++)
                    {
                        swap=0;
                        for(b=1;b<=n-a;b++)
                        {

                            //if(r[b].p.markOf50+r[b].p.markOf100+r[b].p.markOf200+r[b].p.markOf400+r[b].p.markOf1500+r[b].p.markOfTiaogao+r[b].p.markOfTiaoyuan+r[b].p.markOfBiaoqiang<r[b+1].p.markOf50+r[b+1].p.markOf100+r[b+1].p.markOf200+r[b+1].p.markOf400+r[b+1].p.markOf1500+r[b+1].p.markOfTiaogao+r[b+1].p.markOfTiaoyuan+r[b+1].p.markOfBiaoqiang)
                            if(r[b].manMark<r[b+1].manMark)
                            {
                                r[0]=r[b];
                                r[b]=r[b+1];
                                r[b+1]=r[0];
                                swap=1;
                            }
                        }
                        if(swap==0)
                     break;
                    }
                    printf("���ܷ������ĳɼ���Ϊ��\n");
                    printf("����  Ժϵ����   Ժϵ����   �ɼ�\n");
                    for(k=1;k<=n;k++)
                    {
                        printf(" %d      %d        %sѧԺ    %d\n",k,r[k].orderNum,r[k].name,r[k].manMark);
                    }
                }
               else if(i==3)
                {
                    for(a=1;a<n;a++)
                    {
                        swap=0;
                        for(b=1;b<=n-a;b++)
                        {

                            //if(r[b].p.markOf50+r[b].p.markOf100+r[b].p.markOf200+r[b].p.markOf400+r[b].p.markOf1500+r[b].p.markOfTiaogao+r[b].p.markOfTiaoyuan+r[b].p.markOfBiaoqiang<r[b+1].p.markOf50+r[b+1].p.markOf100+r[b+1].p.markOf200+r[b+1].p.markOf400+r[b+1].p.markOf1500+r[b+1].p.markOfTiaogao+r[b+1].p.markOfTiaoyuan+r[b+1].p.markOfBiaoqiang)
                            if(r[b].womanMark<r[b+1].womanMark)
                            {
                                r[0]=r[b];
                                r[b]=r[b+1];
                                r[b+1]=r[0];
                                swap=1;
                            }
                        }
                        if(swap==0)
                     break;
                    }
                    printf("���ܷ������ĳɼ���Ϊ��\n");
                    printf("����  Ժϵ����   Ժϵ����  �ɼ�\n");
                    for(k=1;k<=n;k++)
                    {
                        printf(" %d      %d        %sѧԺ    %d\n",k,r[k].orderNum,r[k].name,r[k].womanMark);
                    }
                }

            }
            if(j==5)
            {
                printf("��ѡ�����Ĳ�ѯ��ʽ:\n");
                printf("1-����Ŀ��Ų�ѯ  2-��Ժϵ��Ų�ѯ\n");
                scanf("%d",&i);
                if(i==1)
                {
                    printf("1-50m 2-100m 3-200m 4-400m\n");
                    printf("5-1500m 6-���� 7-��Զ 8-��ǹ\n");
                    printf("��������Ҫ��ѯ����Ŀ��\n");
                    scanf("%d",&k);
                    printf("***********************\n");
                    if(k==1)
                    {
                        for(i=1;i<=n;i++)
                        {
                            printf("%s��50m�ɼ�Ϊ��",r[i].name);
                            printf("%d\n",r[i].p.markOf50);
                        }
                    }
                    else if(k==2)
                    {
                        for(i=1;i<=n;i++)
                        {
                            printf("%s��100m�ɼ�Ϊ��",r[i].name);
                            printf("%d\n",r[i].p.markOf100);
                        }
                    }
                    else if(k==3)
                    {
                        for(i=1;i<=n;i++)
                        {
                            printf("%s��200m�ɼ�Ϊ��",r[i].name);
                            printf("%d\n",r[i].p.markOf200);
                        }
                    }
                    else if(k==4)
                    {
                        for(i=1;i<=n;i++)
                        {
                            printf("%s��400m�ɼ�Ϊ��",r[i].name);
                            printf("%d\n",r[i].p.markOf400);
                        }
                    }
                    else if(k==5)
                    {
                        for(i=1;i<=n;i++)
                        {
                            printf("%s��1500m�ɼ�Ϊ��",r[i].name);
                            printf("%d\n",r[i].p.markOf1500);
                        }
                    }
                    else if(k==6)
                    {
                        for(i=1;i<=n;i++)
                        {
                            printf("%s�����߳ɼ�Ϊ��",r[i].name);
                            printf("%d\n",r[i].p.markOfTiaogao);
                        }
                    }
                    else if(k==7)
                    {
                        for(i=1;i<=n;i++)
                        {
                            printf("%s����Զ�ɼ�Ϊ��",r[i].name);
                            printf("%d\n",r[i].p.markOfTiaoyuan);
                        }
                    }
                    else if(k==8)
                    {
                        for(i=1;i<=n;i++)
                        {
                            printf("%s�ı�ǹ�ɼ�Ϊ��",r[i].name);
                            printf("%d\n",r[i].p.markOfBiaoqiang);
                        }
                    }
                     printf("***********************\n");
                }
                if(i==2)
                {
                    printf("������Ժϵ���룺\n");
                    scanf("%d",&k);
                    printf("*********************\n");
                    printf("��ѧԺ50m�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOf50);
                    printf("��ѧԺ100m�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOf100);
                    printf("��ѧԺ200m�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOf200);
                    printf("��ѧԺ400m�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOf400);
                    printf("��ѧԺ1500m�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOf1500);
                    printf("��ѧԺ���ߵĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOfTiaogao);
                    printf("��ѧԺ��Զ�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOfTiaoyuan);
                    printf("��ѧԺ��ǹ�ĳɼ�Ϊ��");
                    printf("%d\n",r[k].p.markOfBiaoqiang);
                    printf("��ѧԺ���ܳɼ��ǣ�");
                    printf("%d\n",r[k].p.markOf50+r[k].p.markOf100+r[k].p.markOf200+r[k].p.markOf400+r[k].p.markOf1500+r[k].p.markOfTiaogao+r[k].p.markOfTiaoyuan+r[k].p.markOfBiaoqiang);
                    printf("*********************\n");
                }
            }
            if(j==6)
            {
                break;
            }
             printf("��ѡ���ܣ�\n1-������Ϣ 2-�޸ĸ�Ժϵ�ܳɼ� 3-ɾ����Ժϵ�ܳɼ� 4-�ɼ����� 5-�ɼ���ѯ  6�˳�\n");
             scanf("%d",&j);
    }

    FILE *fp;
    fp=fopen("e:\\test.txt","w");
        for(k=1;k<=n;k++)
        {
            fprintf(fp,"��ѧԺ�������ǣ�");
            fprintf(fp,"%s\nѧԺ",r[k].name);
            fprintf(fp,"*********************\n");
            fprintf(fp,"��ѧԺ50m�ĳɼ�Ϊ��");
            fprintf(fp,"%d\n",r[k].p.markOf50);
            fprintf(fp,"��ѧԺ100m�ĳɼ�Ϊ��");
            fprintf(fp,"%d\n",r[k].p.markOf100);
            fprintf(fp,"��ѧԺ200m�ĳɼ�Ϊ��");
            fprintf(fp,"%d\n",r[k].p.markOf200);
            fprintf(fp,"��ѧԺ400m�ĳɼ�Ϊ��");
            fprintf(fp,"%d\n",r[k].p.markOf400);
            fprintf(fp,"��ѧԺ1500m�ĳɼ�Ϊ��");
            fprintf(fp,"%d\n",r[k].p.markOf1500);
            fprintf(fp,"��ѧԺ���ߵĳɼ�Ϊ��");
            fprintf(fp,"%d\n",r[k].p.markOfTiaogao);
            fprintf(fp,"��ѧԺ��Զ�ĳɼ�Ϊ��");
            fprintf(fp,"%d\n",r[k].p.markOfTiaoyuan);
            fprintf(fp,"��ѧԺ��ǹ�ĳɼ�Ϊ��");
            fprintf(fp,"%d\n",r[k].p.markOfBiaoqiang);
            fprintf(fp,"��ѧԺ���ܳɼ��ǣ�");
            fprintf(fp,"%d\n",r[k].p.markOf50+r[k].p.markOf100+r[k].p.markOf200+r[k].p.markOf400+r[k].p.markOf1500+r[k].p.markOfTiaogao+r[k].p.markOfTiaoyuan+r[k].p.markOfBiaoqiang);
            fprintf(fp,"*********************\n");

        }
        fclose(fp);


}





