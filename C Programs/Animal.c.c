#include<stdio.h>
int main(){
    char name1[12],name2[12],name3[12];

        scanf("%s",&name1);

        if(name1[0]=='v')
        {
            scanf("%s",&name2);

                if(name2[0]=='a')
                {
                    scanf("%s",&name3);

                        if(name3[0]=='c')
                        {
                            printf("aguia\n");
                        }

                        else if(name3[0]=='o')
                        {
                            printf("pomba\n");
                        }
                }

                else if(name2[0]=='m')
                {
                    scanf("%s",&name3);

                    if(name3[0]=='o')
                        {
                            printf("homem\n");
                        }

                    else if(name3[0]=='h')
                        {
                            printf("vaca\n");
                        }
                }
        }

        else if(name1[0]=='i')
        {
            scanf("%s",&name2);

                if(name2[0]=='i')
                {
                    scanf("%s",&name3);

                        if(name3[0]=='h' && name3[2]=='m')
                        {
                            printf("pulga\n");
                        }

                        else if(name3[0]=='h' && name3[2]=='r')
                        {
                            printf("lagarta\n");
                        }
                }

                else if(name2[0]=='a' && name2[1]=='n')
                {
                    scanf("%s",&name3);
                    if(name3[0]=='h')
                        {
                            printf("sanguessuga\n");
                        }

                        else if(name3[0]=='o')
                        {
                            printf("minhoca\n");
                        }
                }
        }


    
    return 0;
    }