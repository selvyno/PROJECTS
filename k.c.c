#include<stdio.h>
#include<string.h>
#include<conio.h>
void product();
void buy();
void bill();
void main();


void main(sum)
{
int choice;
clrscr();
top:
printf("\n\t|-------------------------------------------------------|");
printf("\n\t|\t               WELCOME                          |");
printf("\n\t|\t            ^^^^^^^^^^^^^                       |");
printf("\n\t|\t|--------------------------------------------|\t|");
printf("\n\t|\t|             KOMAL PVT RESTRUANT            |\t|");
printf("\n\t|\t|         ADDRESS:NEAR CAUCOLA MALL,         |\t|");
printf("\n\t|\t|             1st FLOOR,VASCO.               |\t|");
printf("\n\t|\t|              PH:8788154709                 |\t|");
printf("\n\t|\t|--------------------------------------------|\t|");
printf("\n\t|\t| 1.view product\t\t\t     |\t|");
printf("\n\t|\t| 2.Buy product\t\t\t\t     |\t|");
printf("\n\t|\t| 3.Pay Bill\t\t\t\t     |\t|");
printf("\n\t|\t| 4.Exit Store\t\t\t\t     |\t|");
printf("\n\t|\t|--------------------------------------------|\t|");
printf("\n\t|-------------------------------------------------------|");
printf("\n enter your choice");
scanf("%d",&choice);
if(choice==1)
  {
//printf("\nveiw product");
    product();
  }
  else
   {
    if(choice==2)
      {
//printf("\n Buy Product");
        buy();
      }
      else
       {
       if(choice==3)
         {
          bill(sum);
         }
         else
          {
          if(choice==4)
            {
            }
          }
       }
    }
    
    
void product()           //function 1
{
int choice;
printf("\n\t\t|---------------------------------------------|");
printf("\n\t\t|              V PVT RESTRUANT                |");
printf("\n\t\t|   ADDRESS:NEAR CAUCOLA MALL,1st FLOOR,VASCO.|");
printf("\n\t\t|                 PH:8788154709  	      |");
printf("\n\t\t|---------------------------------------------|");
printf("\n**STARTER**\t\t\t**DESSERTS**\t\t**MAIN DISH**");
printf("\n<<veg>>\t\t  rates\t    <<veg>>\t\trates_ <<veg>>           rates");
printf("\n 1.momos            @100     1.seviyan kheer     @190\t1.fried rice       @200");
printf("  2.fried potato     @60      2.sweet kachoris    @150\t2.palak paneer     @230");
printf("\n 3.mushroom snack   @120     3.barfi             @200\t3.methi paratha    @150");
printf("\n     <<non veg>>\t\t  <<non-veg>>   \t4.paneer biryani   @210");
printf("\n 4.chicken keema    @130     4.fish gulabjamun   @150\t   <<non-veg>>");
printf("\n 5.prawn cutlets    @70      5.beef fudge        @180\t5.chicken briyani  @220");
printf("\n 6.crisp chicken    @50      6.beef pasta        @200\t6.egg curry        @190");
printf("\n\t **SOUP**\t\t\t\t        7.ambur briyani     @220");
printf("  <<veg>>\t     rates  \t\t\t\t8.egg noodles      @200");
printf("  1.tamato soup	     @100 ");
printf("\n 2.vegetable soup    @130");
printf("\n 3.leek potato soup  @150");
printf("\n      <<non-veg>>");
printf("\n 4.meat soup         @230");
printf("\n 5.tegg drop soup    @190 ");
printf("\n 6.meat soup         @230 ");
printf("\nDo You Want To Shop Than Press 1 Or Exit 2");
scanf("%d",&choice);
if(choice==1)
  {
   buy();
  }
  else
  {
    main();
  }
//getch();
}

//function 2
void buy()
{
int choice,ans,result,plates,sum=0;
clrscr();
pqr:
//printf("\n****Bill Amt %d",bill);
printf("\n\t\t|---------------------------------------------|");
printf("\n\t\t|              V PVT RESTRUANT                |");
printf("\n\t\t|   ADDRESS:NEAR CAUCOLA MALL,1st FLOOR,VASCO.|");
printf("\n\t\t|                 PH:8788154709  	      |");
printf("\n\t\t|---------------------------------------------|");
printf("\n 1.STARTER");
printf("\n 2.MAIN DISH");
printf("\n 3.DESSERTS");
printf("\n 4.SOUP");
printf("\n 5.exits");
printf("\n 6.main screen");
printf("\n enter your choice");
scanf("%d",&choice);
if(choice==1)
  {
    xyz:
    printf("\nstarter");
    printf("\n*veg*\n");
 	printf("\n1.momos @100\n2.fried potato @60\n3.mushroom snack @120\n4.paneer rolls@100");
	printf("\t\t\t\n*non-veg*");
	printf("\n5.chicken keema @130\t\t\t\n6. prawn cutlets @70\t\t\t\n7.perifish fingers @100\t\t\t\n8.crisp chicken @50");
	scanf("%d",&ans);
	printf("\nEnter the No. of Plates");
	scanf("%d",&plates);
    if(ans==1)  //mistake 1 no closing brackets
      {
       sum=sum+(100*plates);
       printf("\nDo you want more Starters press 2,or exit any number. Main screen press 6.");
       scanf("%d",&result);
        if(result==2)
          {
           goto xyz;
          }
          else
           {
          	 main(sum);
		   } 
       }
	   else
	    { 
	    if(ans==2)
            {
          	    sum=sum+(60*plates);
          		printf("\nDo you want more Starters press 2,or exit any number. Main screen press 6.");
            	scanf("%d",&result);
          		if(result==2)
           		  {
                   goto xyz;
            	  }
            	  else
            	  {
            	  	main(sum);
				  }
             }
		     else
		      { 
              if(ans==3)
                {
                  sum=sum+(120*plates);
                  printf("\nDo you want more Starters press 2,or exit any number. Main screen press 6.");
                  scanf("%d",&result);
                  if(result==2)
           		  {
                   goto xyz;
            	  }
            	  else
            	  {
            	  	main(sum);
				  }
                }
				else
	             {
                 if(ans==4)
                  {
                    sum=sum+(100*plates);
                    printf("\nDo you want more Starters press 2,or exit any number. Main screen press 6.");
                    scanf("%d",&result);
                    if(result==11)
                     {
                      goto xyz;
                     }
                     else
                     {
                     	main(sum);
				   	 }
                  }
                  else
                   {
			       if(ans==5)
   			        {
    			      sum=sum+(130*plates);
   				  	 printf("\nDo you want more Starters press 2,or exit any number. Main screen press 6.");
   				 	 scanf("%d",&result);
   				     if(result==2)
     			      {
                       goto xyz;
      			      }
      			      else
      			      {
      			      	main(sum);
					  }
      	            }
      	            else
      	             {
			         if(ans==6)
  				       {
    				    sum=sum+(70*plates);
   					    printf("\nDo you want more Starters press 2,or exit any number. Main screen press 6.");
   					    scanf("%d",&result);
   					    if(result==2)
     				      {
      				  	    goto xyz;
     				      }
     				      else
     				      {
     				      	main(sum);
						  }
     		          }
              	      else
                       {
                       if(ans==7)
                         {
   			              sum=sum+(100*plates);
   			              printf("\nDo you want more Starters press 2,or exit any number. Main screen press 6.");
   			              scanf("%d",&result);
   			              if(result==2)
     		                {
      		              	goto xyz;
     		                }
     		               else
     		               {
     		               	main(sum);
						   }
                         } 
 						 else
   						  {
   						  if(ans==8)
      					    {
   							 sum=sum+(50*plates);
   							 printf("\nDo you want more Starters press 2,or exit any number. Main screen press 6.");
   							 scanf("%d",&result);
   						     if(result==2)
     	  				 		{
      								goto xyz;
     	  						}
     	  						else
     	  						{
     	  							main(sum);
								}
						    }
					      } 
					   }
				     }
			       }
		}   
  }   
  if(choice==2)
    {
       ABC:
 		printf("\n\n main dish");
 		printf("\n*veg*\t\t\t      *non-veg*");
		 printf("\n1.pea pulao recipe @190\t\t7.chicken briyani @220");
 		printf("\n2. palak paneer @230\t\t8.egg curry @190");	
		printf("\n3. methi paratha @150\t\t9.ambur briyani @220");
		printf("\n4 paneer tika @240\t\t10.egg noodles @200");
		printf("\n5 fried rice @200\t\t11.chicken pasta @250");
		printf("\n6. paneer biryani @210\t\t12.fish curry @210");

		scanf("%d",&ans);
		printf("\nEnter the No. of Plates");
		scanf("%d",&plates);
		if(ans==1)
 		 {
   			sum=sum+(190*plates);
   			printf("\nDo you want more Starters,press 11,if not than press any number.");
   			scanf("%d",&result);
   			if(result==11)
     		{
      			goto ABC;
     		}
     		else
    		 {
     			main(sum);
	 		 }
   			else
     		 {
      		 if(result==20)
       			{
	 				main();
       			}
  				else
    				 {
      					goto pqr;
     				 }
     		 }		
   	    }
   	    else
   	     {
         if(ans==2)
           {
             sum=sum+(230*plates);
   			printf("\nDo you want more main dish,press 11,if not than press any number.");
   			scanf("%d",&result);
   			if(result==11)
     			{
      				goto ABC;
     			}
     			else
    			 {
     				main(sum);
	 			 }
   				else
      			 {
                   if(result==20)
       				 {
	 				  main(sum);
       				 }
   					else
     				{
       					goto pqr;
     				}
     			}
   			}
   			else
   			 {
			 if(ans==3)
  			   {
   				sum=sum+(150*plates);
   				printf("\nDo you want more main dish,press 11,if not than press any number.");
   				scanf("%d",&result);
   				if(result==11)
     				{
      				goto ABC;
    				 }
   					else
    				 {
      				if(result==20)
       					{
						 main(sum);
       					}
   						else
     					{
     					 goto pqr;
    					 }
     				}
     				else
     				 {
					 if(ans==4)
  						{
   						sum=sum+(240*plates);
   						printf("\nDo you want more main dish,press 11,if not than press any number.");
   						scanf("%d",&result);
   						if(result==11)
     						{
      							goto ABC;
     						}
   							else
    						 {
      						 if(result==20)
       						   {
	 							main(sum);
      						   }
   								else
     							{
      							   goto pqr	;
     							}	
     						 }
    					 }
    					 else
    					 {
						 if(ans==5)
  							{
   							sum=sum+(200*plates);
   								printf("\nDo you want more main dish,press 11,if not than press any number.");
   								scanf("%d",&result);
   								if(result==11)
     							 {	
   								   goto ABC;
     							 }
   								 else
     							 {
      							 if(result==20)
       							  {
	 								main();
       							  }
   								  else
     								{
      									goto pqr;
     								}
     							 }
    						}
							else
							 {
							 if(ans==6)
  								{
   s								um=sum+(210*plates);
   									printf("\nDo you want more main dish,press 11,if not than press any number.");
   									scanf("%d",&result);
   									if(result==11)
     									{
      										goto ABC;
     									}
   										else
     									 {
      									 if(result==20)
       										{
	 											main();
       										}
   											else
    										 {
      											goto pqr;
     											}
     }
   }
if(ans==7)
  {
   sum=sum+(220*plates);
   printf("\nDo you want more main dish,press 11,if not than press any number.");
   scanf("%d",&result);
   if(result==11)
     {
      goto ABC;
     }
   else
     {
      if(result==20)
       {
	 main();
       }
   else
     {
      goto pqr;
     }
     }
   }
//*******************************************
if(ans==8)
  {
   sum=sum+(190*plates);
   printf("\nDo you want more main dish,press 11,if not than press any number.");
   scanf("%d",&result);
   if(result==11)
     {
      goto ABC;
     }
   else
     {
      if(result==20)
       {
	 main();
       }
   else
     {
      goto pqr;
     }
     }
    }
   if(ans==9)
  {
   sum=sum+(220*plates);
   printf("\nDo you want more main dish,press 11,if not than press any number.");
   scanf("%d",&result);
   if(result==11)
     {
      goto ABC;
     }
   else
     {
      if(result==20)
       {
	 main();
       }
   else
     {
      goto pqr;
     }
     }
   }
   if(ans==10)
  {
   sum=sum+(200*plates);
   printf("\nDo you want more main dish,press 11,if not than press any number.");
   scanf("%d",&result);
   if(result==11)
     {
      goto ABC;
     }
   else
     {
      if(result==20)
       {
	 main();
       }
   else
     {
      goto pqr;
     }
     }
  }
   if(ans==11)
  {
   sum=sum+(250*plates);
   printf("\nDo you want more main dish,press 11,if not than press any number.");
   scanf("%d",&result);
   if(result==11)
     {
      goto ABC;
     }
   else
     {
      if(result==20)
       {
	 main();
       }
   else
     {
      goto pqr;
     }
    }
     }
if(ans==12)
  {
   sum=sum+(210*plates);
   printf("\nDo you want more main dish,press 11,if not than press any number.");
   scanf("%d",&result);
   if(result==11)
     {
      goto ABC;
     }
   else
     {
      if(result==20)
       {
	 main();
       }
   else
     {
      goto pqr;
     }
     }
   }
//getch();
}
else
{
if (choice==3)
{
MID:
printf("\n*veg*\t\t\t\t*non-veg*");
printf("\n1.seviyan kheer @190\t\t5.fish gulabjamun @150");
printf("\n2.sweet kachoris  @150\t\t6.beef fudge @180");
printf("\n3.barfi @200    \t\t7.cake beef loaf @120(each pices)");
printf("\n4.jalebi @140\t8 beef pasta @200");

scanf("%d",&ans);
printf("\nEnter the No. of Plates");
scanf("%d",&plates);
if(ans==1)
  {
   sum=sum+(190*plates);
   printf("\nDo you want more dessert,press 11,if not than press any number.");
   scanf("%d",&result);
   if(result==11)
     {
      goto MID;
     }
   else
     {
      if(result==20)
       {
	 main();
       }
   else
     {
      goto pqr;
     }
     }
   }
if(ans==2)
  {
   sum=sum+(150*plates);
   printf("\nDo you want more dessert,press 11,if not than press any number.");
   scanf("%d",&result);
   if(result==11)
     {
      goto MID;
     }
   else
     {
      if(result==20)
       {
	 main();
       }
   else
     {
      goto pqr;
     }
     }
   }
if(ans==3)
  {
   sum=sum+(200*plates);
   printf("\nDo you want more dessert,press 11,if not than press any number.");
   scanf("%d",&result);
   if(result==11)
     {
      goto MID;
     }
   else
     {
      if(result==20)
       {
	 main();
       }
   else
     {
      goto pqr;
     }
     }
   }
if(ans==4)
  {
   sum=sum+(140*plates);
   printf("\nDo you want more dessert,press 11,if not than press any number.");
   scanf("%d",&result);
   if(result==11)
     {
      goto MID;
     }
   else
     {
      if(result==20)
       {
	 main();
       }
   else
     {
      goto pqr;
     }
     }
   }
if(ans==5)
  {
   sum=sum+(150*plates);
   printf("\nDo you want more dessert,press 11,if not than press any number.");
   scanf("%d",&result);
   if(result==11)
     {
      goto MID;
     }
   else
     {
      if(result==20)
       {
	 main();
       }
   else
     {
      goto pqr;
     }
     }
   }
if(ans==6)
  {
   sum=sum+(180*plates);
   printf("\nDo you want more dessert,press 11,if not than press any number.");
   scanf("%d",&result);
   if(result==11)
     {
      goto MID;
     }
   else
     {
      if(result==20)
       {
	 main();
       }
   else
     {
      goto pqr;
     }
     }
   }
if(ans==7)
  {
   sum=sum+(120*plates);
   printf("\nDo you want more dessert,press 11,if not than press any number.");
   scanf("%d",&result);
   if(result==11)
     {
      goto MID;
     }
   else
     {
      if(result==20)
       {
	 main();
       }
   else
     {
      goto pqr;
     }
     }
   }
if(ans==8)
  {
   sum=sum+(200*plates);
   printf("\nDo you want more dessert,press 11,if not than press any number.");
   scanf("%d",&result);
   if(result==11)
     {
      goto MID;
     }
   else
     {
      if(result==20)
       {
	 main();
       }
   else
     {
      goto pqr;
     }
     }
//getch();
}
else
{
if(choice==4)
{
int  answer;
KKK:
printf("\n*veg*\t\t\tnon-veg*");
printf("\n1.tamato soup @100\t\t4.meat soup @230");
printf("\n2.vegetable soup @130\t\t5.egg drop soup @190");
printf("\n3.leek potato soup @150\t\t6.chicken @200");
scanf("%d",&answer);
printf("\nEnter the No. of Plates");
scanf("%d",&plates);
if(plates<3)
  {
   printf("\n cannot buy more than 3 plates");
   getch();
   goto KKK;
  }
  switch(answer)
  {
   case 1:
   {
    sum=sum+(100*plates);
    printf("\nDo you want more soup,press 11,if not than press any number.(20)");
    scanf("%d",&result);
    if(result==11)
     {
      goto KKK;
     }
    else
     {
      if(result==20)
       {
	 main();
       }
      else
       {
	 goto pqr;
       }
     }
     break;
   }
   case 2:
   {
    sum=sum+(130*plates);
    printf("\nDo you want more soup,press 11,if not than press any number.");
    scanf("%d",&result);
    if(result==11)
     {
      goto KKK;
     }
    else
     {
      if(result==20)
       {
	 main();
       }
      else
      {
       goto pqr;
      }
     }
     break;
   }
   case 3:
   {
    sum=sum+(150*plates);
    printf("\nDo you want more soup,press 11,if not than press any number.");
    scanf("%d",&result);
    if(result==11)
     {
      goto KKK;
     }
    else
     {
      if(result==20)
       {
	 main();
       }
      else
      {
       goto pqr;
      }
     }
     break;
   }
   case 4:
   {
    sum=sum+(230*plates);
    printf("\nDo you want more soup,press 11,if not than press any number.");
    scanf("%d",&result);
    if(result==11)
     {
      goto KKK;
     }
    else
     {
      if(result==20)
       {
	 main();
       }
      else
      {
       goto pqr;
      }
     }
     break;
   }
   case 5:
   {
    sum=sum+(190*plates);
    printf("\nDo you want more soup,press 11,if not than press any number.");
    scanf("%d",&result);
    if(result==11)
     {
      goto KKK;
     }
    else
     {
      if(result==20)
       {
	 main();
       }
      else
      {
       goto pqr;
      }
     }
     break;
   }
   case 6:
   {
    sum=sum+(200*plates);
    printf("\nDo you want more soup,press 11,if not than press any number.");
    scanf("%d",&result);
    if(result==11)
     {
      goto KKK;
     }
    else
     {
      if(result==20)
       {
     	 main();
       }
      else
      {
       goto pqr;
      }
     }
     break;
   }
  }
 if(ans==5)
 {
  main();
 }
// main();
//bill(sum);
 else
 {
 goto KKK;
 }
}
}
}
}
getch();
}



void bill(sum)
{
int a;
clrscr();
printf("\n****Bill Amt %d",sum);
printf("\n\t\t<<<<<------------------------>>>>>");
printf("\n\t\t|**********BILL******************|");
printf("\n\t\t| Total Bill Amt %d\t         |" ,sum);
printf("\n\t\t|Thank You :::::::::Vist Again   |");
printf("\n\t\t|********************************|");
printf("\n Do You Want shop Again Press 1");
scanf("%d",&a);
if(a==1)
 {
   main();
 }
}


