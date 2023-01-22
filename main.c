#include<stdio.h>
#include<stdlib.h>
int main(){
    int op,w,opt,amt=0,tpt,spt,pp=1,pmt;
    char name[25],mail[50],ph[11],cno[13],ed[3],em[3],cvv[4],upi[20],pin[6];
    printf("                                               _________________________________________                 \n"); 
    printf("                                              |                WELCOME!                 |                \n");
    printf("                                              |_________________________________________|                \n");
    printf("                                                                                                         \n");
    printf("                                                    ===> MOVIE BOOKING SYSTEM <===                       \n");
    printf("                                                                                                         \n");
    printf("                                              Enter Your Name: ");
    scanf("%[^\n]%*c",name);
    printf("                                                                                               \n");
    printf("                                              Enter Your Mail ID: ");
    scanf("%[^\n]%*c",mail);
    printf("                                                                                                \n");
    printf("                                              Enter Contact Number: ");
    scanf("%[^\n]%*c",ph);
    printf("                                                                                                         \n");
    printf("                                              Hello %s \n",name);
    while(pp!=0)
    {
        printf("                                       ---> We Provide The Below Services <---                         \n");
        printf("                                                                                                \n");
        printf("                                                                                                \n");
        printf("                                          1. Movie Ticket Booking                                        \n");
        printf("                                          2. Snacks Booking                                              \n");
        printf("                                          3. Payment                                              \n");
        printf("                                          4. Exit                                                 \n");
        printf("                                                                                                \n");
        printf("                                     Select Your Requirement: ");
        scanf("%d",&op);
        printf("                                                                                                \n");
        
        if(op==1)
        {
            printf("                                         Great! That's An Excellent Choice.                         \n");
            printf("                                                                                                    \n");
            printf("                                     Select The Type Of Movies You Need.                            \n");
            printf("                                                                                                    \n");
            printf("                                          1. Telugu Movies                                          \n");
            printf("                                          2. English Movies                                         \n");
            printf("                                          3. Hindi Movies                                           \n");
            printf("                                                                                                    \n");
            printf("                                     Enter Your Choice: ");
            scanf("%d",&w);
            printf("                                                                                               \n");
            if(w==1)
            {
                printf("                                      Select Movies \n");
                printf("                                                                                                \n");
                printf("                                          1. Waltair Veeraya                                    \n");
                printf("                                          2. Veera Simha Reddy                                  \n");
                printf("                                          3. Dhamaka                                            \n");
                printf("                                          4. Butterfly                                          \n");
                printf("                                                                                                \n");
                printf("                                     Enter Your Choice: ");
                scanf("%d",&opt);
                printf("                                                                                               \n");
                if(opt==1 || opt==2 || opt==3 || opt==4)
                {
                    amt=(amt+120);
                    printf("                                      The Approx Amount For Movie Is $%d \n",amt);
                    printf("                                      Select Theatres \n");
                    printf("                                          1. Santosh Theatre:Ibrahimpatnam                      \n");
                    printf("                                          2. Kumar Theatre:Kachiguda                            \n");
                    printf("                                          3. INOX:Maheswari                                     \n");
                    printf("                                          4. Rama Krishna 70mm:Abids                            \n");
                    printf("                                          5. Cine Town:Karmanghat                               \n");
                    printf("                                     Enter Your Choice: ");
                    scanf("%d",&tpt);
                    printf("                                                                                                \n");
                    
                    if(tpt==1 || tpt==2 || tpt==3 || tpt==4 || tpt==5)
                    {
                        printf("                                      Select Time Slots \n");
                        printf("                                          1. 6:00AM - 9:00AM                                    \n");
                        printf("                                          2. 9:30AM - 12:30PM                                   \n");
                        printf("                                          3. 1:00PM - 4:00PM                                    \n");
                        printf("                                          4. 4:30PM - 7:30PM                                    \n");
                        printf("                                          5. 8:00PM - 11:00PM                                   \n");
                        printf("                                     Enter Your Choice: ");
                        scanf("%d",&spt);
                        printf("                                                                                                \n");
                    }
                    printf("                                                 ---> Thank You <---\n");
                    printf("                                                                                                \n");
                    printf("                                 The Amount For The Tickets:%d /-\n",amt);
                    printf("                                                                                                \n");
                    printf("                                 Further Queries please, Contact: Joshika@gmail.com\n");
                
                }
            }
            else if(w==2)
            {
                printf("                                      Select Movies \n");
                printf("                                                                                              \n");
                printf("                                          1. Avatar:The Way Of Water                          \n");
                printf("                                          2. Thor Love Thunder                                 \n");
                printf("                                          3. Lucy                                              \n");
                printf("                                          4. The Price We Pay                                  \n");
                printf("                                                                                                \n");
                printf("                                     Enter Your Choice: ");
                scanf("%d",&opt);
                printf("                                                                                               \n");
                if(opt==1 || opt==2 || opt==3 || opt==4)
                {
                    amt=(amt+120);
                    printf("                                      The Approx Amount For Movie Is $%d \n",amt);
                    printf("                                      Select Theatres \n");
                    printf("                                          1. Santosh Theatre:Ibrahimpatnam                      \n");
                    printf("                                          2. Kumar Theatre:Kachiguda                            \n");
                    printf("                                          3. INOX:Maheswari                                     \n");
                    printf("                                          4. Rama Krishna 70mm:Abids                            \n");
                    printf("                                          5. Cine Town:Karmanghat                               \n");
                    printf("                                     Enter Your Choice: ");
                    scanf("%d",&tpt);
                    printf("                                                                                                \n");
                    if(tpt==1 || tpt==2 || tpt==3 || tpt==4 || tpt==5)
                    {
                        printf("                                      Select Time Slots \n");
                        printf("                                          1. 6:00AM - 9:00AM                                    \n");
                        printf("                                          2. 9:30AM - 12:30PM                                   \n");
                        printf("                                          3. 1:00PM - 4:00PM                                    \n");
                        printf("                                          4. 4:30PM - 7:30PM                                    \n");
                        printf("                                          5. 8:00PM - 11:00PM                                   \n");
                        printf("                                     Enter Your Choice: ");
                        scanf("%d",&spt);
                        printf("                                                                                                \n");
                    }
                    printf("                                                 ---> Thank You <---\n");
                    printf("                                                                                                \n");
                    printf("                                 The Amount For The Tickets:%d /-\n",amt);
                    printf("                                                                                                \n");
                    printf("                                 Further Queries please, Contact: Joshika@gmail.com\n");
                
                }
            }
            else if(w==3)
            {
                printf("                                      Select Movies \n");
                printf("                                                                                                \n");
                printf("                                          1. Sachin The Ultimate Winner                         \n");
                printf("                                          2. Zindagi Shatranj Hai                               \n");
                printf("                                          3. Kuttey                                             \n");
                printf("                                          4. Paathan                                            \n");
                printf("                                                                                                \n");
                printf("                                     Enter Your Choice: ");
                scanf("%d",&opt);
                printf("                                                                                               \n");
                if(opt==1 || opt==2 || opt==3 || opt==4)
               {
                    amt=(amt+120);
                    printf("                                      The Approx Amount For Movie Is %d /-\n",amt);
                    printf("                                      Select Theatres \n");
                    printf("                                          1. Santosh Theatre:Ibrahimpatnam                      \n");
                    printf("                                          2. Kumar Theatre:Kachiguda                            \n");
                    printf("                                          3. INOX:Maheswari                                     \n");
                    printf("                                          4. Rama Krishna 70mm:Abids                            \n");
                    printf("                                          5. Cine Town:Karmanghat                               \n");
                    printf("                                     Enter Your Choice: ");
                    scanf("%d",&tpt);
                    printf("                                                                                                \n");
                    if(tpt==1 || tpt==2 || tpt==3 || tpt==4 || tpt==5)
                    {
                        printf("                                      Select Time Slots \n");
                        printf("                                          1. 6:00AM - 9:00AM                                    \n");
                        printf("                                          2. 9:30AM - 12:30PM                                   \n");
                        printf("                                          3. 1:00PM - 4:00PM                                    \n");
                        printf("                                          4. 4:30PM - 7:30PM                                    \n");
                        printf("                                          5. 8:00PM - 11:00PM                                   \n");
                        printf("                                     Enter Your Choice: ");
                        scanf("%d",&spt);
                        printf("                                                                                                \n");
                    }
                    printf("                                                 ---> Thank You <---\n");
                    printf("                                                                                                \n");
                    printf("                                 The Amount For The Tickets:%d /-\n",amt);
                    printf("                                                                                                \n");
                    printf("                                 Further Queries please, Contact: Joshika@gmail.com\n");
                
                }
            }
        }
        else if(op==2)
        {
            printf("                                         Great! That's An Excellent Choice.                         \n");
            printf("                                                                                                    \n");
            printf("                                     Select The Type Of Snacks You Need.                            \n");
            printf("                                                                                                    \n");
            printf("                                          1. Hot Snacks                                             \n");
            printf("                                          2. Cool Drinks                                            \n");
            printf("                                          3. Ice Creams                                             \n");
            printf("                                                                                                    \n");
            printf("                                     Enter Your Choice: ");
            scanf("%d",&w);
            printf("                                                                                                    \n");
            if(w==1)
            {
                printf("                                      Select Snacks \n");
                printf("                                                                                                \n");
                printf("                                          1. Samosa                                    \n");
                printf("                                          2. Egg Puff                                  \n");
                printf("                                          3. Chips                                            \n");
                printf("                                          4. Chicken Puff                                          \n");
                printf("                                                                                                \n");
                printf("                                     Enter Your Choice: ");
                scanf("%d",&opt);
                printf("                                                                                               \n");
                if(opt==1)
               {
                    amt=(amt+25);
                    printf("                                      The Approx Amount For Samosa Is %d /-\n",amt);
               }
                else if(opt==2)
                {
                    amt=(amt+35);
                    printf("                                      The Approx Amount For Egg Puff is %d /-\n",amt);
                }
                else if(opt==3)
                {
                    amt=(amt+20);
                    printf("                                      The Approx Amount For Chips is %d /-\n",amt);
                }
                else if(opt==4)
                {
                    amt=(amt+45);
                    printf("                                      The Approx Amount For Chicken Puff is %d /-\n",amt);
                }
            }
            else if(w==2)
            {
                printf("                                      Select Drinks \n");
                printf("                                                                                               \n");
                printf("                                          1. ThumsUp                                           \n");
                printf("                                          2. Sprite                                            \n");
                printf("                                          3. Coca Cola                                          \n");
                printf("                                          4. Sting                                              \n");
                printf("                                                                                                \n");
                printf("                                     Enter Your Choice: ");
                scanf("%d",&opt);
                printf("                                                                                               \n");
                if(opt==1 )
                   {
                        amt=(amt+50);
                        printf("                                      The Approx Amount For ThumsUp Is %d /-\n",amt);
                   }
                else if(opt==2)
                    {
                        amt=(amt+50);
                        printf("                                      The Approx Amount For Sprite is %d /-\n",amt);
                    }
                else if(opt==3)
                    {
                        amt=(amt+50);
                        printf("                                      The Approx Amount For CocaCola is %d /-\n",amt);
                    }
                else if(opt==4)
                    {
                        amt=(amt+55);
                        printf("                                      The Approx Amount For Sting is %d /-\n",amt);
                    }
            }
            else if(w==3)
            {
                printf("                                      Select Ice Creams \n");
                printf("                                                                                               \n");
                printf("                                          1. Vannila                                           \n");
                printf("                                          2. ButterScotch                                            \n");
                printf("                                          3. Choclate                                          \n");
                printf("                                          4. Belgium Dark Choclate                                              \n");
                printf("                                                                                                \n");
                printf("                                     Enter Your Choice: ");
                scanf("%d",&opt);
                printf("                                                                                               \n");
                if(opt==1 )
               {
                    amt=(amt+30);
                    printf("                                      The Approx Amount For ThumsUp Is %d /-\n",amt);
               }
                else if(opt==2)
                {
                    amt=(amt+45);
                    printf("                                      The Approx Amount For Sprite is %d /-\n",amt);
                }
                else if(opt==3)
                {
                    amt=(amt+50);
                    printf("                                      The Approx Amount For CocaCola is %d /-\n",amt);
                }
                else if(opt==4)
                {
                    amt=(amt+75);
                    printf("                                      The Approx Amount For Sting is %d /-\n",amt);
                }
            }
        }    
        else if(op==3)
        {
            printf("                                %s ,The Total Amount You Must Pay: %d /-\n",name,amt);
            printf("                                                                                                      \n");
            printf("                                                  Payment Options                                     \n");
            printf("                                          1. Debit Card                                        \n");
            printf("                                          2. Paytm                                              \n");
            printf("                                          3. Phone Pay                                              \n");
            printf("                                          4. Google Pay                                        \n");
            printf("                                          5. Slice Card                                              \n");
            printf("                                          6. Credit Card                                              \n");
            printf("                                                                                                      \n");
            printf("                                     Enter Your Choice: ");
            scanf("%d",&pmt);
            if(pmt==1 || pmt==6 || pmt==5)
            {
                printf("                                          Enter Card Number: ");
                scanf("%s",cno);
                printf("                                          Enter Expiry Date: ");
                scanf("%s",ed);
                printf("                                          Enter Expiry Month: ");
                scanf("%s",em);
                printf("                                          Enter CVV Number: ");
                scanf("%s",cvv);
                printf("                                          Payment Successfull !!                                 \n");
                printf("                                                                                                \n");
                printf("                                          Booking Completed   !!                                 \n");
                printf("                                                                                                \n");
                printf("                                          %s,Tickets Have Sent To Your Number via SMS\n",name);
                printf("                                          And To Your Mail:%s\n",mail);
                exit(0);
            }
            else if(pmt==2 || pmt==3||pmt==4)
            {
                printf("                                          Enter UPI Id: ");
                scanf("%s",upi);
                printf("                                          Enter UPI Pin: ");
                scanf("%s",pin);
                printf("                                          Payment Successfull !!                                 \n");
                printf("                                                                                                \n");
                printf("                                          Booking Completed   !!                                 \n");
                printf("                                                                                                \n");
                printf("                                          %s,Tickets Have Sent To Your Number via SMS\n",name);
                printf("                                          And To Your Mail:%s\n",mail);
                exit(0);
            }
        }
        else if(op==4)
        {
            exit(0);
        }
    }
}
