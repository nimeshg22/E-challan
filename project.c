#include <stdio.h>
int paymentre();
int paymentre()
{
  
    char customer_name[50];
    float amount;
    printf("Enter  name: ");
    scanf("%s", customer_name);
    printf("Enter amount: ");
    scanf("%f", &amount);
    
    printf("\nPayment Receipt\n");
    printf("Customer Name: %s\n", customer_name);
    printf("Amount: $%.2f\n", amount);
    printf("Thank you for your payment!\n");
char back;
 printf("\n if you ehant to go home page then press<y>or<Y>");
    

    
    return 0;


}
int rule();
int rule()
{
printf("Traffic Rules in India\n");
printf("Traffic rules are officially listed in the 1989 ‘Rules of Road Regulations.’ They are as follows:\n");

printf("Keep to your left if driving on a two-way street or road so that vehicles coming in the opposite direction can pass using the right lane smoothly.\n");

printf("If you want to turn left ahead, you must stay on the left side before taking a turn.\n");

printf("If you want to turn right ahead, you must be at the centre of the road and then gradually take a broad right turn.\n");

printf("When you are coming towards a road intersection, road junction, or pedestrian crossing, you must slow down your vehicle.\n");

printf("If being overtaken by a vehicle, you must not increase the speed of your vehicle or, in any way, prevent the vehicle that is attempting to overtake you.\n");

printf("Overtaking is prohibited in the following cases:\n");
printf("- If passing would, in any way, be dangerous for other travellers on the road.\n");
printf("- If passing is near a bend, hill, corner, or point, as it may lead to a critical accident without clear sight of the road in front.\n");
printf("- If the driver upfront has not signalled the driver behind.\n");

printf("- When trying to overtake a vehicle that’s already being passed by the third vehicle.\n");

printf("For those driving two-wheelers, you and your pillion must wear a helmet.\n");

printf("Parking is not permitted on the top of a hill, footpath, and road for pedestrians. The same isn't permitted near traffic lights, a crossing on the road, the entrance of a building, or if it covers a fire hydrant.\n");

printf("Your temporary or permanent Vehicle Registration Number (VRN) must always be displayed on the front and back of your vehicle.\n");

printf("Only a single pillion is permitted per two-wheeler.\n");

printf("Drivers must make way for any cyclists on the road.\n");

printf("The head or tail lights of your vehicle should never be obstructed.\n");

printf("Driving in the reverse direction is punishable by law on a one-way road.\n");

printf("When overtaking another vehicle, one must not go beyond the yellow line.\n");

printf("One must respect the STOP sign on roads and not stop beyond the sign.\n");

printf("Honking should only be carried out if necessary.\n");

printf("When driving on a mountain or hill, your vehicle must be towards the right side of the road.\n");

printf("One cannot load the vehicle with certain goods, like Inflammable and explosive goods.\n");

printf("Overtaking must only be carried out from the right side.\n");
char back;
 printf("\n if you ehant to go home page then press<y>or<Y>");
    scanf("/c",&back);
    if(back=='y'||back=='Y')
   { home();}











}
int help();
int help()
{
  int num;
printf("\nif you whant to know What is e-Challan? press <1>\n");
printf(" \nwant to know about The e-challan India has been customised  press <2>\n");
printf("\nBenefits of the e-Challan System? press <3>\n");

scanf("%d",&num);
switch(num)
{
case(1):
printf("Under a challan system, an official notice is issued by the traffic enforcement authorities to the violator of the traffic rules in written form. The challan notifies the person about payment of a penalty for not adhering to traffic law. According to the Motor Vehicles Rules, 1988, the traffic police have the right to issue challans to anyone seen breaking the traffic rules.");

printf("With the growth of digitisation, challan is now issued digitally with the help of the Electronic Challan System. The system was introduced by the government in pilot phases in 2012. It helps to ensure the safety of all. The traffic police e-challan system is a software application that includes an android app and a web interface. The system is integrated with the Vahan and Sarathi apps involving several functions of the Traffic Enforcement System.");
break;
case(2):
printf("The e-challan India has been customised for the following stakeholders:");


printf("Traffic police\n");
printf("Citizens\n");
printf("Regional Transport Office or RTO\n");
printf("State Transport Office or STO\n");
printf("NIC admin\n");
printf("The Ministry of Road Transport and Highways\n");
printf("Violations for which you might get an e-challan in India:\n");

printf("Jumping of red lights\n");
printf("Driving at speeds beyond the specified speed limit\n");
printf("Driving an unauthorised motor vehicle\n");
printf("Drunk driving\n");
printf("Driving without a valid driving licence\n");
printf("Driving without a mandatory insurance policy\n");
printf("Not sharing information when asked by the traffic police\n");
printf("Not stopping the motor vehicle when asked by the traffic police\n");
printf("Not wearing seatbelts or helmets\n");
printf("Not carrying proper vehicle documents\n");
break;
case(3):
printf("Benefits of the e-Challan System?\n");
printf("The e-challan system has several benefits listed below:\n");

printf("The e-challan system offers an efficient and easy traffic management system resulting in improved traffic behaviour and road safety.\n");

printf("The integrated system of e-challan ensures transparency and data reliability. The digitisation at every step helps analyse various traffic violations, number of challans and payments, etc.\n");

printf("Traffic rules violations involve bribery and other corrupt practices. With complete digitisation, there is more transparency in the challan system. It has helped curb corruption and loss of revenue.\n");

printf("The system allows the citizens to pay the challan anytime and anywhere, saving time and effort\n");

printf("The e-challan has replaced the use of paper.\n");
break;
}
char back;
 printf("\n if you want to go home page then press<y>or<Y>");
    scanf("/c",&back);
    if(back=='y'||back=='Y')
   { home();}
}
int detail();
int detail()
{
  

struct bio {
    char name[50];
    int age;
    char address[100];
    char phone[20];
};

int main();
{
  char back;
    struct bio person;
    printf("Enter your name: ");
    scanf("%s", person.name);
    printf("Enter your age: ");
    scanf("%d", &person.age);
    printf("Enter your address: ");
    scanf("%s", person.address);
    printf("Enter your phone number: ");
    scanf("%s", person.phone);
    
    printf("\n*******************************************************Bio Data*******************************************************\n");
    printf("                                             Name: %s\n                                                                    ", person.name);
     printf("\n**********************************************************************************************************************\n");
    printf("                                             Age: %d\n", person.age);
    printf("\n**********************************************************************************************************************\n");
    printf("                                             Address: %s\n", person.address);
    printf("\n**********************************************************************************************************************\n");
    printf("                                             Phone: %s\n", person.phone);
    printf("\n**********************************************************************************************************************\n");
    printf("\n if you ehant to go home page then press<y>or<Y>");
    scanf("/c",&back);
    if(back=='y'||back=='Y')
   { home();}
    
    return 0;
}

}
int stored();
int stored()
{
  #include <stdio.h>

struct bio {
    char name[50];
    int age;
    char address[100];
    char phone[20];
};

int main();
{
    struct bio person;
    printf("Enter your name: ");
    scanf("%s", person.name);
    printf("Enter your age: ");
    scanf("%d", &person.age);
    printf("Enter your address: ");
    scanf("%s", person.address);
    printf("Enter your phone number: ");
    scanf("%s", person.phone);

    FILE *file = fopen("bio_data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "Name: %s\n", person.name);
    fprintf(file, "Age: %d\n", person.age);
    fprintf(file, "Address: %s\n", person.address);
    fprintf(file, "Phone: %s\n", person.phone);
    fclose(file);
    printf("Bio data saved to file bio_data.txt\n");

    return 0;
}

}
int home();
int pay();
int pay()
{
printf("\n if you pay your challan late par day 10per extra\n");
printf("\nbasic  car challan is 500$ when you break any traffic rule\n");
printf("\nif you dont were your helmet challan is extra 200$\n");

int n=5;
//char challan,helmet;
char challan,helmet;
int car=500;
int a,b,c;
a=car+200;
b=n*((car+200)%10)+car+200;
c=(n*(car%10))+car;
printf( "you pay your challan late ?\n");
scanf("\n%c",&challan);
printf(" you  were  helmet ?\n");
scanf("\n%c",&helmet);
 

if((challan=='n') && (helmet=='y'))
 
 {printf("\n you dont need to pay challan \n"); 
 home();
 }
 
 
else if ((challan=='n') && (helmet=='n'))
 {  printf("\n%dyou need to pay  : ",a);}
    
else if ((challan=='y') && (helmet=='n'))
   
   { printf(" \n%dyou need to pay :",b);}

   
else if ((helmet=='y') && (challan=='y'))
   
   { printf("\n%dyou need to pay : ",c);}
   char back;
 printf("\n if you ehant to go home page then press<y>or<Y>");
    scanf("/c",&back);
    if(back=='y'||back=='Y')
   { home();}

}
int home()
{

  int enter ;
  char challan, helmet;
  printf("\nif you want to pay your challan enter 1:");
  printf("\nif you want to add your detail  enter 2:");
  printf("\nknow about rule enter 3:");
  printf("\nif you want to store your detail  enter 4:");
  printf("\nif you want to take payment resipt enter 5 :");
   printf("\nneed help enter 6 :");
 
  scanf("%d",&enter);
  
  switch (enter) {
    case 1:
    
     pay();
      break;
    case 2:
      detail();
      break;
    case 3:
      rule();
      break;
    case 4:
      stored();
      break;
    case 5:
      paymentre();
      break;
   case 6:
   help();
  }
}

int main() {
    printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|                                                                ");printf ("the e challan payment system                                                                             "); printf("|");
    printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
   printf(" Benefits of the e-Challan System?.\n");printf("\n");
  printf(" The e-challan system has several benefits listed below:\n");

printf("The e-challan system offers an efficient and easy traffic management system resulting in improved traffic behaviour and road safety.\n");

printf("The integrated system of e-challan ensures transparency and data reliability. The digitisation at every step helps analyse various traffic violations, number of challans and payments, etc.\n");

printf("Traffic rules violations involve bribery and other corrupt practices. With complete digitisation, there is more transparency in the challan system. It has helped curb corruption and loss of revenue.\n");

printf("The system allows the citizens to pay the challan anytime and anywhere, saving time and effort\n");

printf("The e-challan has replaced the use of paper\n");
printf("\n");
printf("\n");
printf("please login to further prosase");
printf("\n");

    
    int u1=123,u2;
    int p1=1234,p2;
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|                                          ");printf("ENTER USER NAME:"); scanf("%d",&u2);                             
    printf("\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|                                          ");printf("ENTER PASSWORD:"); scanf("%d",&p2);;                                             
    printf("\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"); 
if(u2==u1 && p2==p1)
      { printf("wellcome\n");
        home();
      }
   else if  (u1==u2 && p1!=p2)
 { printf("+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+ your password is invalid please  try again +-+-+-+-+-+-+-+-+-+\n\n");}
    else if  (u1!=u2 && p1==p2)
  { printf("+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+ your username is invalid  please  try again +-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+\n\n");}
    else if  (u1!=u2 && p1!=p2)
  { printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ your username and password is invalid  please  try again +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+");printf("\n");printf("\n");}
        
    
  return 0;
}
