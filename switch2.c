//21.
#include <stdio.h>
int main() {
    int seatType, showTime;
    int price = 0;
    scanf("%d", &seatType);
    scanf("%d", &showTime);
    switch (seatType) {
        case 1:  
            price = 150;
            break;
        case 2:  // Gold
            price = 250;
            break;
        default:
            printf("Invalid Seat Type");
            return 0;
    }
    if (showTime >= 18) {
        price += 50;
    }
    printf("Ticket Price ₹%d", price);
    return 0;
}

//22.
#include <stdio.h>

int main() {
    int connectionType, units;
    int bill = 0;
    scanf("%d", &connectionType);
    scanf("%d", &units);
    switch (connectionType) {
        case 1:  
            if (units <= 30) {
                bill = units * 5;
            } else {
                bill = 30 * 5 + (units - 30) * 8;
            }
            break;
            case 2:  
            bill = units * 10;
            break;
            default:
            printf("Invalid Connection Type");
            return 0;
    }
    printf("Bill ₹%d", bill);
    return 0;
}

//23.
#include <stdio.h>
int main() {
    int customerType, billAmount;
    float finalAmount = 0;
    scanf("%d", &customerType);
    scanf("%d", &billAmount);
    switch (customerType) {
        case 1: 
            finalAmount = billAmount - (billAmount * 5 / 100.0);
            break;
        case 2:
            finalAmount = billAmount - (billAmount * 15 / 100.0);
            break;
        default:
            printf("Invalid Customer Type");
            return 0;
    }
    printf("Pay ₹%.0f", finalAmount);
    return 0;
}

//24.
#include <stdio.h>
int main() {
    int callType, minutes;
    int charge = 0;
    scanf("%d", &callType);
    scanf("%d", &minutes);
    switch (callType) {
        case 1:
            charge = minutes * 1;
            break;
        case 2: 
            charge = minutes * 3;
            break;
        case 3: 
            charge = minutes * 10;
            break;
        default:
            printf("Invalid Call Type");
            return 0;
    }printf("Call Charge ₹%d", charge);
}

//25.
#include <stdio.h>
int main() {
    int category;
    int fee = 0;
    scanf("%d", &category);
    switch (category) {
        case 1:
            fee = 1200;
            break;
        case 2:
            fee = 800;
            break;
        case 3:
            fee = 500;
            break;
        default:
            printf("Invalid Category");
    }printf("Exam Fee ₹%d", fee);
    return 0;
}

//26.
#include <stdio.h>
int main() {
    int delayDays;
    int fine = 0;
    scanf("%d", &delayDays);
    switch (delayDays) {
        case 1:
         case 2:
         case 3:
          case 4: 
          case 5:
            fine = delayDays * 50;
            break;
            case 6:
             case 7: 
             case 8:
              case 9:
               case 10:
            fine = delayDays * 100;
            break;
            default:
            fine = delayDays * 200;
    }
    printf("Fine ₹%d", fine);
    return 0;
}

//27.
#include <stdio.h>
int main() {
    int deliveryMode;
    int charge = 0;
    scanf("%d", &deliveryMode);
    switch (deliveryMode) {
        case 1:
            charge = 40;
            break;
        case 2:
            charge = 120;
            break;
        case 3:
            charge = 0;
            break;
        default:
            printf("Invalid Mode");
    }
    printf("Delivery Charge ₹%d", charge);
}

//28.
#include <stdio.h>
int main() {
    int roomType;
    int fee = 0;
    scanf("%d", &roomType);
    switch (roomType) {
        case 1:
            fee = 80000;
            break;
        case 2:
            fee = 60000;
            break;
        case 3:
            fee = 45000;
            break;
        default:
            printf("Invalid Room Type");
    }
    printf("Hostel Fee ₹%d", fee);
    return 0;
}

//29.
#include <stdio.h>
int main() {
    int vehicleType, distance;
    int fare = 0;
    scanf("%d", &vehicleType);
    scanf("%d", &distance);
    switch (vehicleType) {
        case 1:
            fare = distance * 10;
            break;
        case 2:
            fare = distance * 15;
            break;
        case 3:
            fare = distance * 20;
            break;
        default:
            printf("Invalid Vehicle Type");
            return 0;
    }
    printf("Fare ₹%d", fare);
}

//30.
#include <stdio.h>
int main() {
    int hours;
    scanf("%d", &hours);
    switch(hours) {
        case 1:
            printf("Short Interruption");
            break;
        case 2:
        case 3:
        case 4:
            printf("Medium Interruption");
            break;
        default:
            printf("Long Interruption");
    }
}

//31.
#include <stdio.h>
int main() {
    int durationType;
    int fee = 0;
    scanf("%d", &durationType);
    switch (durationType) {
        case 1:
            fee = 1500;
            break;
        case 2:
            fee = 4000;
            break;
        case 3:
            fee = 7000;
            break;
        default:
            printf("Invalid Duration")
    }
    printf("Membership Fee ₹%d", fee);
}
//32.
#include <stdio.h>
int main() {
    int violationType;
    int fine = 0;
    scanf("%d", &violationType);
    switch (violationType) {
        case 1:
            fine = 1000;
            break;
        case 2:
            fine = 1500;
            break;
        case 3:
            fine = 2000;
            break;
        default:
            printf("Invalid Violation Type");
    }
    printf("Fine ₹%d", fine);
}

//33.
#include <stdio.h>
int main() {
    int bookType, daysLate;
    int fee = 0;
    scanf("%d", &bookType);
    scanf("%d", &daysLate);
    switch (bookType) {
        case 1:
            fee = daysLate * 2;
            break;
        case 2: 
            fee = daysLate * 5;
            break;
        default:
            printf("Invalid Book Type");
    }
    printf("Late Fee ₹%d", fee);
    return 0;
}

//34.
#include <stdio.h>
int main() {
    int planType;
    int speed = 0;
    scanf("%d", &planType);
    switch (planType) {
        case 1:
            speed = 40;
            break;
        case 2:
            speed = 100;
            break;
        case 3:
            speed = 300;
            break;
        default:
            printf("Invalid Plan Type");
            return 0;
    }
    printf("Speed %d Mbps", speed);
    return 0;
}

//35.
#include <stdio.h>
int main() {
    int fuelType, litres;
    int cost = 0;
    scanf("%d", &fuelType);
    scanf("%d", &litres);
    switch (fuelType) {
        case 1: 
            cost = litres * 105;
            break;
        case 2:
            cost = litres * 92;
            break;
        case 3: 
            cost = litres * 85;
            break;
        default:
            printf("Invalid Fuel Type");
    }
    printf("Fuel Cost ₹%d", cost);
}

//36.
#include <stdio.h>
int main() {
    int classType;
    int fee = 0;
    scanf("%d", &classType);
    switch (classType) {
        case 1:
            fee = 300;
            break;
        case 2:
            fee = 800;
            break;
        case 3:
            fee = 1500;
            break;
        default:
            printf("Invalid Class Type");
            return 0;
    }
    printf("Upgrade Fee ₹%d", fee);
}
//37.
#include <stdio.h>
int main() {
    int courseType;
    int fee = 0;
    scanf("%d", &courseType);
    switch (courseType) {
        case 1:
            fee = 0;
            break;
        case 2:
            fee = 500;
            break;
        default:
            printf("Invalid Course Type");
            return 0;
    }
    printf("Certificate Fee ₹%d", fee);
}
//38.
#include <stdio.h>
int main() {
    int doctorType;
    int fee = 0;
    scanf("%d", &doctorType);
    switch (doctorType) {
        case 1:
            fee = 500;
            break;
        case 2:
            fee = 1200;
            break;
        default:
            printf("Invalid Doctor Type");
            return 0;
    }
    printf("Consultation Fee ₹%d", fee);
}
//39.
#include <stdio.h>
int main() {
    int distanceCategory;
    int fee = 0;
    scanf("%d", &distanceCategory);
    switch (distanceCategory) {
        case 1:
            fee = 800;
            break;
        case 2:
            fee = 1200;
            break;
        case 3:
            fee = 1800;
            break;
        default:
            printf("Invalid Distance Category");
            return 0;
    }
    printf("Transport Fee ₹%d", fee);
}
//40.
#include <stdio.h>
int main() {
    int warrantyCategory;
    scanf("%d", &warrantyCategory);
    switch (warrantyCategory) {
        case 1:
            printf("Under Warranty");
            break;
        case 2:
            printf("Limited Warranty");
            break;
        case 3:
            printf("Out of Warranty");
            break;
        default:
            printf("Invalid Warranty Category");
    }
}