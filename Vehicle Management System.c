/*Mini Project CSE-103 final*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


struct name
{
    char newUser[50];
    char newPassword[50];
}*ptr,s;

struct addVehicle
{
    int id;
    char vehicleName[200];
    char manufactureName[200];
    int dd,mm,yy;
} list[100];

int printMessegeInCenter(char str[])
{
    int i,len;
    len = strlen(str)/2;
    for(i=0; i<78/2-len; i++)
    {
        printf(" ");
    }
    printf("%s",str);
}

int head_Message(void)
{
    char str[]="Vehicle Management System";
    printf("\n\n\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\t\t<~><~><~><~>                                                   <~><~><~><~>\n");
    printf("\t\t");
    printMessegeInCenter(str);
    printf("\n\t\t<~><~><~><~>                                                   <~><~><~><~>\n");
    printf("\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n\n");
}
int welcome_Message(int counter,char username[50],char password[50])
{
    char str[]="CSE 103 Project";
    printf("\n\n\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\t\t<~>                                                                     <~>\n");
    printf("\t\t");
    printMessegeInCenter(str);
    printf("\n\t\t<~>                                                                     <~>\n");
    printf("\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>");
    printf("\n\n\n\n");

    printf("    ");
    printf("\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n\n");
    printf("\t\t\t   <~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\t\t           <~>                     WELCOME                    <~>\n");
    printf("\t\t           <~>                       TO                       <~>\n");
    printf("\t\t           <~>                     VEHICLE                    <~>\n");
    printf("\t\t           <~>                   MANAGEMENT                   <~>\n");
    printf("\t\t           <~>                     SYSTEM                     <~>\n");
    printf("\t\t\t   <~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n\n");
    printf("\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n\n");

    printf("\n\t\t\tPress any key to continue...\n\n");
    getch();
    system("cls");
    login(counter,username,password);

}
int login(int counter,char username[50], char password[50])
{
    system("cls");
    head_Message();
    char str[]="Log In";

    ptr = &s;
    printf("\n\n\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\t\t<~>                                                                     <~>\n");
    printf("\t\t");
    printMessegeInCenter(str);
    printf("\n\t\t<~>                                                                     <~>\n");
    printf("\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>");
    printf("\n\n\n\n");

    fflush(stdin);
    printf("\n\t\t\t\tUsername: ");
    gets(ptr->newUser);
    fflush(stdin);

    if(strcmp(username,ptr->newUser)==0)
    {
        fflush(stdin);
        printf("\t\t\t\tPassword: ");
        gets(ptr->newPassword);
        fflush(stdin);
        if(strcmp(password,ptr->newPassword)==0)
        {
            printf("\n\t\t\t  Login Successfully.....\n");
            getch();
            system("cls");
            menuOption(counter,username,password);
        }
        else
        {
            printf("\n\n\t\t\t\tIncorrect password\n");
            printf("\t\t\t\tTry again...\n");
            getch();
            system("cls");
            login(counter,username,password);
        }

    }
    else
    {
        printf("\n\n\t\t\t\tIncorrect Username\n");
        printf("\t\t\t\tTry again...\n");
        getch();
        system("cls");
        login(counter,username,password);
    }
}

int add_Vehicles(int counter)
{
    system("cls");
    head_Message();
    char str[]="Add Vehicle";

    printf("\n\n\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\t\t<~>                                                                     <~>\n");
    printf("\t\t");
    printMessegeInCenter(str);
    printf("\n\t\t<~>                                                                     <~>\n");
    printf("\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>");
    printf("\n\n\n\n");

    printf("\t\t\tInformation for vehicle %d\n\n",counter+1);
    printf("\t\t\tEnter vehicle ID(int): ");
    scanf("%d",&list[counter].id);
    fflush(stdin);

    printf("\t\t\tEnter vehicle name: ");

    int i,z=0,p=0;
    gets(list[counter].vehicleName);
    fflush(stdin);
    for(i=0; i<strlen(list[counter].vehicleName); i++)
    {
        int x = list[counter].vehicleName[i];
        if((x>=48 && x<=57)|| (x>=65 && x<=90) || (x>=97 && x<=122) || x == 45 || x==32)
        {

        }
        else
            z =1;
    }
    if(z==0)
    {
    }
    else
    {
        p=1;
        printf("\n\t\t\tInvalid name. Enter a valid name and try again");
        getch();
        system("cls");
        add_Vehicles(counter);
    }

    if(p==0)
    {
        printf("\t\t\tEnter Manufacture Name: ");
        gets(list[counter].manufactureName);
        fflush(stdin);

        printf("\t\t\tEnter date (DD/MM/YYYY format): ");
        scanf("%d/%d/%d",&list[counter].dd,&list[counter].mm,&list[counter].yy);

        //check year
        if(list[counter].yy>=1900 && list[counter].yy<=9999)
        {
            //check month
            if(list[counter].mm>=1 &&list[counter].mm<=12)
            {
                //check days
                if((list[counter].dd>=1 && list[counter].dd<=31) && (list[counter].mm==1 || list[counter].mm==3 || list[counter].mm==5 || list[counter].mm==7 || list[counter].mm==8 || list[counter].mm==10 || list[counter].mm==12))
                {}
                else if((list[counter].dd>=1 && list[counter].dd<=30) && (list[counter].mm==4 || list[counter].mm==6 || list[counter].mm==9 || list[counter].mm==11))
                {}
                else if((list[counter].dd>=1 && list[counter].dd<=28) && (list[counter].mm==2))
                {}
                else if(list[counter].dd==29 && list[counter].mm==2 && (list[counter].yy%400==0 ||(list[counter].yy%4==0 && list[counter].yy%100!=0)))
                {}
                else
                {
                    printf("\n\n\t\t\tDay is invalid.Try again\n");
                    getch();
                    system("cls");
                    add_Vehicles(counter);
                }

            }
            else
            {
                printf("\n\n\t\t\tMonth is not valid.Try again\n");
                getch();
                system("cls");
                add_Vehicles(counter);
            }
        }
        else
        {
            printf("\n\n\t\t\tYear is not valid.Try again\n");
            getch();
            system("cls");
            add_Vehicles(counter);
        }
    }


    counter++;

    printf("\n\n\t\t\tVehicles added  successfully!");
    printf("\n\n\t\t\tPress any key to go main menu..");
    getch();
    system("cls");
    menuOption(counter);

}

int search_Vehicles(int counter)
{
    system("cls");
    head_Message();
    int i;
    char str[]="Search Vehicle";
    printf("\n\n\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\t\t<~>                                                                     <~>\n");
    printf("\t\t");
    printMessegeInCenter(str);
    printf("\n\t\t<~>                                                                     <~>\n");
    printf("\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>");
    printf("\n\n\n\n");
    int no=0;

    char name[200];
    printf("\n\t\t\tEnter vehicles name: ");
    fflush(stdin);
    gets(name);
    for(i=0; i<counter; i++)
    {
        if((strcmp(name,list[i].vehicleName))==0)
        {
            printf("\n\t\t\tVehicles id: %d\n",list[i].id);
            printf("\t\t\tVehicles name: %s\n",list[i].vehicleName);
            printf("\t\t\tVehicles Manufacturer name: %s\n",list[i].manufactureName);
            printf("\t\t\tVehicles issues date: %d/%d/%d\n",list[i].dd,list[i].mm,list[i].yy);
            no++;
        }
    }

    if(no>=0 && no<=0)
    {
        printf("\n\t\t\tNo vehicles found!");
    }

    printf("\n\t\t\tPress any key to go main menu..");
    getch();
    system("cls");
    menuOption(counter);
}

int view_Vehicles(int counter)
{
    system("cls");
    head_Message();
    int i;
    char str[]="View Vehicles";
    printf("\n\n\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\t\t<~>                                                                     <~>\n");
    printf("\t\t");
    printMessegeInCenter(str);
    printf("\n\t\t<~>                                                                     <~>\n");
    printf("\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>");
    printf("\n\n\n\n");

    if(counter>0)
    {
        printf("\t\t\tList of Vehicles\n");
        for(i=0; i<counter; i++)
        {
            printf("\n\t\t\tVehicles id: %d\n",list[i].id);
            printf("\t\t\tVehicles name: %s\n",list[i].vehicleName);
            printf("\t\t\tVehicles Manufacturer name: %s\n",list[i].manufactureName);
            printf("\t\t\tVehicles issues date: %d/%d/%d\n",list[i].dd,list[i].mm,list[i].yy);
        }
        printf("\n\t\t\tPress any key to go main menu..");
        getch();
        system("cls");
        menuOption(counter);
    }
    else
    {
        printf("\n\t\t\tNo vehicles found!");
        printf("\n\t\t\tPress any key to go main menu..");
        getch();
        system("cls");
        menuOption(counter);
    }
}

int delete_Vehicles(int counter)
{
    system("cls");
    head_Message();
    char str[]="Delete Vehicles";

    printf("\n\n\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\t\t<~>                                                                     <~>\n");
    printf("\t\t");
    printMessegeInCenter(str);
    printf("\n\t\t<~>                                                                     <~>\n");
    printf("\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>");
    printf("\n\n\n\n");

    int del,i,j;
    printf("\t\t\tEnter the vehicles id that you want to delete: ");
    scanf("%d",&del);
    for(i=0; i<counter; i++)
    {
        if(list[i].id==del)
        {
            for(j=i; j<(counter-1); j++)
            {
                list[j]=list[j+1];
            }
            counter--;

            printf("\n\t\t\tVehicles deleted successfully!");
            printf("\n\n\t\t\tPress any key to go main menu..");
            getch();
            system("cls");
            menuOption(counter);
        }
    }

    for(i=0; i<=counter; i++)
    {
        if(list[i].id!=del)
        {
            printf("\n\t\t\tRecord not found!");
            printf("\n\t\t\tPress any key to go main menu..");
            getch();
            system("cls");
            menuOption(counter);
        }
    }
}
int update_Password(int counter,char username[50],char password[50])
{
    ptr = &s;
    char str[]="Update Credential";
    system("cls");
    head_Message();
    printf("\n\n\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\t\t<~>                                                                     <~>\n");
    printf("\t\t");
    printMessegeInCenter(str);
    printf("\n\t\t<~>                                                                     <~>\n");
    printf("\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>");
    printf("\n\n\n\n");

    fflush(stdin);
    printf("\n\t\t\t\tNew Username: ");
    gets(ptr->newUser);
    strcpy(username,ptr->newUser);
    fflush(stdin);

    fflush(stdin);
    printf("\t\t\t\tNew Password: ");
    gets(ptr->newPassword);
    strcpy(password,ptr->newPassword);
    fflush(stdin);

    printf("\n\n\t\t\t\tChange successfully!");
    printf("\n\t\t\t\tLogin Alert!\n");
    getch();
    login(counter,username,password);
}
int menuOption(int counter,char username[50],char password[50])
{
    head_Message();
    int choice;
    char str[]="Main Menu";

    printf("\n\n\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("\t\t<~>                                                                     <~>\n");
    printf("\t\t");
    printMessegeInCenter(str);
    printf("\n\t\t<~>                                                                     <~>\n");
    printf("\t\t<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>");
    printf("\n\n\n\n");

    printf("\t\t\t1. Add Vehicle\n");
    printf("\t\t\t2. Search Vehicle\n");
    printf("\t\t\t3. View Vehicle\n");
    printf("\t\t\t4. Delete Vehicle\n");
    printf("\t\t\t5. Update username/password\n");
    printf("\t\t\t6. Exit\n\n");
    printf("\t\t\tEnter choice (int): ");

    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        add_Vehicles(counter);
        break;
    case 2:
        search_Vehicles(counter);
        break;
    case 3:
        view_Vehicles(counter);
        break;
    case 4:
        delete_Vehicles(counter);
        break;
    case 5:
        update_Password(counter,username,password);
        break;
    case 6:
        printf("\n\n\t\t\t\t\t\tThank you!\n\n");
        getch();
        exit(0);
        break;

    default:
        printf("\n\t\t\tWrong Choice.Try again!");
        getch();
        system("cls");
        menuOption(counter,username,password);
    }
}

int main(void)
{
    int counter=0;
    char username[50] = "admin";
    char password[50] = "admin";
    system("COLOR 3");
    head_Message();
    welcome_Message(counter,username,password);
}
