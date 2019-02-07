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
    printf("*    欢迎使用运动会成绩管理系统    *\n");
    printf("*                                  *\n");
    printf("*                                  *\n");
    printf("************************************\n");
    printf("************请先初始化**************\n");



    int i,j,k,m,n;
    printf("请输入学院个数:");
    scanf("%d",&n);
    SeqList r[n+1];
    for(i=1;i<=n;i++)
    {
        printf("请输入院系编号:\n");
        scanf("%d",&r[i].orderNum);
        printf("请输入院系名称:\n");
        scanf("%s",r[i].name);
        r[i].manMark=0;
        r[i].womanMark=0;
    }
    printf("请选择功能：\n1-输入信息 2-修改各院系总成绩 3-删除各院系总成绩 4-成绩排序 5-成绩查询  6退出\n");
    scanf("%d",&j);

    while(j!=6)
    {
        if(j==1)
        {
         for(i=1;i<=n;i++)
            {
                printf("院系编号：%d",r[i].orderNum);
                printf("  院系名称：%s\n",r[i].name);
                printf("***********************\n");
                printf("该学院50m男子跑步成绩:");
                scanf("%d",&k);
                r[i].manMark=r[i].manMark+k;
                printf("该学院50m女子跑步成绩:");
                scanf("%d",&m);
                r[i].womanMark=r[i].womanMark+m;
                r[i].p.markOf50=k+m;


                printf("该学院100m男子跑步成绩:");
                scanf("%d",&k);
                r[i].manMark=r[i].manMark+k;
                printf("该学院100m女子跑步成绩:");
                scanf("%d",&m);
                r[i].womanMark=r[i].womanMark+m;
                r[i].p.markOf100=k+m;


                printf("该学院200m男子跑步成绩:");
                scanf("%d",&k);
                r[i].manMark=r[i].manMark+k;
                printf("该学院200m女子跑步成绩:");
                scanf("%d",&m);
                r[i].womanMark=r[i].womanMark+m;
                r[i].p.markOf200=k+m;


                printf("该学院400m男子跑步成绩:");
                scanf("%d",&k);
                r[i].manMark=r[i].manMark+k;
                printf("该学院400m女子跑步成绩:");
                scanf("%d",&m);
                r[i].womanMark=r[i].womanMark+m;
                r[i].p.markOf400=k+m;


                printf("该学院1500m男子跑步成绩:");
                scanf("%d",&k);
                r[i].manMark=r[i].manMark+k;
                printf("该学院1500m女子跑步成绩:");
                scanf("%d",&m);
                r[i].womanMark=r[i].womanMark+m;
                r[i].p.markOf1500=k+m;


                printf("该学院男子跳高成绩:");
                scanf("%d",&k);
                r[i].manMark=r[i].manMark+k;
                printf("该学院女子跳高成绩:");
                scanf("%d",&m);
                r[i].womanMark=r[i].womanMark+m;
                r[i].p.markOfTiaogao=k+m;


                printf("该学院男子跳远成绩:");
                scanf("%d",&k);
                r[i].manMark=r[i].manMark+k;
                printf("该学院女子跳远成绩:");
                scanf("%d",&m);
                r[i].womanMark=r[i].womanMark+m;
                r[i].p.markOfTiaoyuan=k+m;


                printf("该学院男子标枪成绩:");
                scanf("%d",&k);
                r[i].manMark=r[i].manMark+k;
                printf("该学院女子标枪成绩:");
                scanf("%d",&m);
                r[i].womanMark=r[i].womanMark+m;
                r[i].p.markOfBiaoqiang=k+m;
            }
        }

            if(j==2)
            {
                printf("***************************\n");
                printf("请输入你想修改的院系的代码:\n");
                scanf("%d",&k);
                printf("\n");
                printf("*您即将修改%s学院的成绩*\n",r[k].name);
                printf("1-50m 2-100m 3-200m 4-400m \n5-1500m 6-跳高 7-跳远 8-标枪\n");
                printf("请选择你想修改的项目：\n");
                scanf("%d",&i);
                printf("\n");

                while(i!=6)
                {
                    printf("请输入更新后的成绩:");
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
                    printf("%s学院成绩修改后的情况如下：\n",r[k].name);
                    printf("该学院50m的成绩为：");
                    printf("%d\n",r[k].p.markOf50);
                    printf("该学院100m的成绩为：");
                    printf("%d\n",r[k].p.markOf100);
                    printf("该学院200m的成绩为：");
                    printf("%d\n",r[k].p.markOf200);
                    printf("该学院400m的成绩为：");
                    printf("%d\n",r[k].p.markOf400);
                    printf("该学院1500m的成绩为：");
                    printf("%d\n",r[k].p.markOf1500);
                    printf("该学院跳高的成绩为：");
                    printf("%d\n",r[k].p.markOfTiaogao);
                    printf("该学院跳远的成绩为：");
                    printf("%d\n",r[k].p.markOfTiaoyuan);
                    printf("该学院标枪的成绩为：");
                    printf("%d\n",r[k].p.markOfBiaoqiang);
                    printf("该学院的总成绩是：");
                    printf("%d\n",r[k].p.markOf50+r[k].p.markOf100+r[k].p.markOf200+r[k].p.markOf400+r[k].p.markOf1500+r[k].p.markOfTiaogao+r[k].p.markOfTiaoyuan+r[k].p.markOfBiaoqiang);
                    printf("*********************\n");


            }
            if(j==3)
            {
                printf("请输入你想删除的院系的代码:\n");
                scanf("%d",&k);
                printf("\n");
                printf("*您即将删除%s学院的成绩*\n",r[k].name);
                printf("1-50m 2-100m 3-200m 4-400m \n5-1500m 6-跳高 7-跳远 8-标枪\n");
                printf("请选择你想删除的项目：");
                scanf("%d",&i);
                while(i!=6)
                {

                    if(i==1)
                    {
                        r[k].p.markOf50=0;
                        printf("*%s学院的50m成绩已删除*\n",r[k].name);
                    }
                    else if(i==2)
                    {
                        r[k].p.markOf100=0;
                        printf("*%s学院的100m成绩已删除*\n",r[k].name);
                    }
                    else if(i==3)
                    {
                        r[k].p.markOf200=0;
                        printf("*%s学院的200m成绩已删除*\n",r[k].name);
                    }
                    else if(i==4)
                    {
                        r[k].p.markOf400=0;
                        printf("*%s学院的400m成绩已删除*\n",r[k].name);
                    }
                    else if(i==5)
                    {
                        r[k].p.markOf1500=0;
                        printf("*%s学院的1500m成绩已删除*\n",r[k].name);
                    }
                    else if(i==6)
                    {
                        r[k].p.markOfTiaogao=0;
                        printf("*%s学院的跳高成绩已删除*\n",r[k].name);
                    }
                    else if(i==7)
                    {
                        r[k].p.markOfTiaoyuan=0;
                        printf("*%s学院的跳远成绩已删除*\n",r[k].name);
                    }
                    else if(i==8)
                    {
                        r[k].p.markOfBiaoqiang=0;
                        printf("*%s学院的标枪成绩已删除*\n",r[k].name);
                    }
                    else(i==9);
                        break;
                }
                    printf("\n");
                    printf("%s学院成绩删除后的情况如下：\n",r[k].name);
                    printf("该学院50m的成绩为：");
                    printf("%d\n",r[k].p.markOf50);
                    printf("该学院100m的成绩为：");
                    printf("%d\n",r[k].p.markOf100);
                    printf("该学院200m的成绩为：");
                    printf("%d\n",r[k].p.markOf200);
                    printf("该学院400m的成绩为：");
                    printf("%d\n",r[k].p.markOf400);
                    printf("该学院1500m的成绩为：");
                    printf("%d\n",r[k].p.markOf1500);
                    printf("该学院跳高的成绩为：");
                    printf("%d\n",r[k].p.markOfTiaogao);
                    printf("该学院跳远的成绩为：");
                    printf("%d\n",r[k].p.markOfTiaoyuan);
                    printf("该学院标枪的成绩为：");
                    printf("%d\n",r[k].p.markOfBiaoqiang);
                    printf("该学院的总成绩是：");
                    printf("%d\n",r[k].p.markOf50+r[k].p.markOf100+r[k].p.markOf200+r[k].p.markOf400+r[k].p.markOf1500+r[k].p.markOfTiaogao+r[k].p.markOfTiaoyuan+r[k].p.markOfBiaoqiang);
                    printf("*********************\n");
            }

            if(j==4)
            {
                int swap;
                int a,b;
                printf("1-按总分排序 2-按男子总分排序 3-按女子总分排序\n");
                printf("请选择一种排序方式:\n");
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
                    printf("按总分排序后的成绩单为：\n");
                    printf("名次  院系代码   院系名称   成绩\n");
                    for(k=1;k<=n;k++)
                    {
                        printf(" %d      %d        %s学院    %d\n",k,r[k].orderNum,r[k].name,r[k].p.markOf50+r[k].p.markOf100+r[k].p.markOf200+r[k].p.markOf400+r[k].p.markOf1500+r[k].p.markOfTiaogao+r[k].p.markOfTiaoyuan+r[k].p.markOfBiaoqiang);
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
                    printf("按总分排序后的成绩单为：\n");
                    printf("名次  院系代码   院系名称   成绩\n");
                    for(k=1;k<=n;k++)
                    {
                        printf(" %d      %d        %s学院    %d\n",k,r[k].orderNum,r[k].name,r[k].manMark);
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
                    printf("按总分排序后的成绩单为：\n");
                    printf("名次  院系代码   院系名称  成绩\n");
                    for(k=1;k<=n;k++)
                    {
                        printf(" %d      %d        %s学院    %d\n",k,r[k].orderNum,r[k].name,r[k].womanMark);
                    }
                }

            }
            if(j==5)
            {
                printf("请选择您的查询方式:\n");
                printf("1-按项目编号查询  2-按院系编号查询\n");
                scanf("%d",&i);
                if(i==1)
                {
                    printf("1-50m 2-100m 3-200m 4-400m\n");
                    printf("5-1500m 6-跳高 7-跳远 8-标枪\n");
                    printf("请输入您要查询的项目：\n");
                    scanf("%d",&k);
                    printf("***********************\n");
                    if(k==1)
                    {
                        for(i=1;i<=n;i++)
                        {
                            printf("%s的50m成绩为：",r[i].name);
                            printf("%d\n",r[i].p.markOf50);
                        }
                    }
                    else if(k==2)
                    {
                        for(i=1;i<=n;i++)
                        {
                            printf("%s的100m成绩为：",r[i].name);
                            printf("%d\n",r[i].p.markOf100);
                        }
                    }
                    else if(k==3)
                    {
                        for(i=1;i<=n;i++)
                        {
                            printf("%s的200m成绩为：",r[i].name);
                            printf("%d\n",r[i].p.markOf200);
                        }
                    }
                    else if(k==4)
                    {
                        for(i=1;i<=n;i++)
                        {
                            printf("%s的400m成绩为：",r[i].name);
                            printf("%d\n",r[i].p.markOf400);
                        }
                    }
                    else if(k==5)
                    {
                        for(i=1;i<=n;i++)
                        {
                            printf("%s的1500m成绩为：",r[i].name);
                            printf("%d\n",r[i].p.markOf1500);
                        }
                    }
                    else if(k==6)
                    {
                        for(i=1;i<=n;i++)
                        {
                            printf("%s的跳高成绩为：",r[i].name);
                            printf("%d\n",r[i].p.markOfTiaogao);
                        }
                    }
                    else if(k==7)
                    {
                        for(i=1;i<=n;i++)
                        {
                            printf("%s的跳远成绩为：",r[i].name);
                            printf("%d\n",r[i].p.markOfTiaoyuan);
                        }
                    }
                    else if(k==8)
                    {
                        for(i=1;i<=n;i++)
                        {
                            printf("%s的标枪成绩为：",r[i].name);
                            printf("%d\n",r[i].p.markOfBiaoqiang);
                        }
                    }
                     printf("***********************\n");
                }
                if(i==2)
                {
                    printf("请输入院系代码：\n");
                    scanf("%d",&k);
                    printf("*********************\n");
                    printf("该学院50m的成绩为：");
                    printf("%d\n",r[k].p.markOf50);
                    printf("该学院100m的成绩为：");
                    printf("%d\n",r[k].p.markOf100);
                    printf("该学院200m的成绩为：");
                    printf("%d\n",r[k].p.markOf200);
                    printf("该学院400m的成绩为：");
                    printf("%d\n",r[k].p.markOf400);
                    printf("该学院1500m的成绩为：");
                    printf("%d\n",r[k].p.markOf1500);
                    printf("该学院跳高的成绩为：");
                    printf("%d\n",r[k].p.markOfTiaogao);
                    printf("该学院跳远的成绩为：");
                    printf("%d\n",r[k].p.markOfTiaoyuan);
                    printf("该学院标枪的成绩为：");
                    printf("%d\n",r[k].p.markOfBiaoqiang);
                    printf("该学院的总成绩是：");
                    printf("%d\n",r[k].p.markOf50+r[k].p.markOf100+r[k].p.markOf200+r[k].p.markOf400+r[k].p.markOf1500+r[k].p.markOfTiaogao+r[k].p.markOfTiaoyuan+r[k].p.markOfBiaoqiang);
                    printf("*********************\n");
                }
            }
            if(j==6)
            {
                break;
            }
             printf("请选择功能：\n1-输入信息 2-修改各院系总成绩 3-删除各院系总成绩 4-成绩排序 5-成绩查询  6退出\n");
             scanf("%d",&j);
    }

    FILE *fp;
    fp=fopen("e:\\test.txt","w");
        for(k=1;k<=n;k++)
        {
            fprintf(fp,"该学院的名称是：");
            fprintf(fp,"%s\n学院",r[k].name);
            fprintf(fp,"*********************\n");
            fprintf(fp,"该学院50m的成绩为：");
            fprintf(fp,"%d\n",r[k].p.markOf50);
            fprintf(fp,"该学院100m的成绩为：");
            fprintf(fp,"%d\n",r[k].p.markOf100);
            fprintf(fp,"该学院200m的成绩为：");
            fprintf(fp,"%d\n",r[k].p.markOf200);
            fprintf(fp,"该学院400m的成绩为：");
            fprintf(fp,"%d\n",r[k].p.markOf400);
            fprintf(fp,"该学院1500m的成绩为：");
            fprintf(fp,"%d\n",r[k].p.markOf1500);
            fprintf(fp,"该学院跳高的成绩为：");
            fprintf(fp,"%d\n",r[k].p.markOfTiaogao);
            fprintf(fp,"该学院跳远的成绩为：");
            fprintf(fp,"%d\n",r[k].p.markOfTiaoyuan);
            fprintf(fp,"该学院标枪的成绩为：");
            fprintf(fp,"%d\n",r[k].p.markOfBiaoqiang);
            fprintf(fp,"该学院的总成绩是：");
            fprintf(fp,"%d\n",r[k].p.markOf50+r[k].p.markOf100+r[k].p.markOf200+r[k].p.markOf400+r[k].p.markOf1500+r[k].p.markOfTiaogao+r[k].p.markOfTiaoyuan+r[k].p.markOfBiaoqiang);
            fprintf(fp,"*********************\n");

        }
        fclose(fp);


}





