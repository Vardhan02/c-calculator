#include <math.h>
#include <stdio.h>

//This program was edited by Vaidehi Sridhar [CB.EN.U4CSE20668]
// 1. Addition

void calcAddition() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a + b;
    printf("The sum is %d\n", result);
}


// Fill the rest of the functionality here!
// 2. Subtraction
void calcSubtractionVaidehi() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a - b;
    printf("The difference is %d\n", result);
}
// 3. Multiplication
void calcMultiplicationVaidehi() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a * b;
    printf("The product is %d\n", result);
}
// 4. Division
void calcDivisionVaidehi() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    float result = a / b;
    printf("The result is %.2f\n", result);
}
// 5. Exponentiation
void calcExponentiationVaidehi() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = pow(a,b);
    printf("The result is %d\n", result);
}

void calcSubtraction() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a - b;
    printf("The sum is %d\n", result);
}

void calcProduct() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a * b;
    printf("The Product is %d\n", result);
}
void calcDivision() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a/b;
    printf("The Division is %d\n", result);
}
void calcExponentiation() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = pow(a,b);
    printf("The sum is %d\n", result);
}
// 6. Sine
void calcSine() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = sin(radians);

    printf("The sine value is %.3f", answer);
}

// Fill the rest of the functionality here!

// 7. Cosine
void calcCosineVaidehi() {

// 7. Cosine - Sashank
void calcSine() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;

    double answer = cos(radians);

    printf("The cosine value is %.3f", answer);

    double answer = cosin(radians);

    printf("The cosine value is %f", answer);
}
// 7. Cosine(sai mrudhun)
void calccosine() {
    int angle;
    scanf("%d",&angle);

    // converting degrees into radians
    double radians=angle / 180.0 * 3.14;
    double answer=cos(radians);

    printf("the cosine value is %f", answer);
}
// 8. Tangent
void calcTanVaidehi() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = tan(radians);

    printf("The tangent value is %.3f", answer);
}
// 9. Floor
void calcFloorVaidehi() {
    printf("\nEnter a float\n");
    int n;
    scanf("%d", &n);
    int answer = floor(n);
    printf("The floor value is %d", answer);
}
// 10. Ceiling
void calcCeilVaidehi() {
    printf("\nEnter a float\n");
    int n;
    scanf("%d", &n);
    int answer = ceil(n);
    printf("The ceiling value is %d", answer);
}
// 11. Round
void calcRoundVaidehi() {
    printf("\nEnter a float\n");
    int n;
    scanf("%d", &n);
    int answer = round(n);
    printf("The rounded value is %d", answer);
}
// 12. Absolute value
void calcAbsVaidehi() {
    printf("\nEnter a float\n");
    int n;
    scanf("%d", &n);
    int answer = abs(n);
    printf("The absolute value is %d", answer);
}

int main() {
    int choice;
    printf(
        "Welcome to the Cool Calculator program!\n\n"
        "1. Addition\n"
        "2. Subtraction\n"
        "3. Multiplication\n"
        "4. Division\n"
        "5. Exponentiation\n"
        "6. Sine\n"
        "7. Cosine\n"
        "8. Tangent\n"
        "9. Floor\n"
        "10. Ceiling\n"
        "11. Round\n"
        "12. Absolute value\n\n"
        "Enter your choice: ");

    scanf("%d", &choice);

    switch (choice) {
        // 1. Addition
        case 1:
            calcAddition();
            break;

        case 2:
            calcSubtractionVaidehi();
            break;
        case 3:
             calcMultiplicationVaidehi();
            break;
        case 4:
             calcDivisionVaidehi();
            break;
        case 5:
        calcExponentiationVaidehi();
            break;
        	calcSubtraction();
            break;
        case 3:
        	calcProduct();
            break;
        case 4:
        	calcDivision();
            break;
        case 5:
        	calcExponentiation();
            break;


        // 6. Sine
        case 6:
            calcSine();
            break;

        case 7:
             calcCosineVaidehi();
            calcCosine();
            break;
        case 8:
             calcTanVaidehi();
            break;
        case 9:
             calcFloorVaidehi();
            break;
        case 10:
             calcCeilVaidehi();
            break;
        case 11:
             calcRoundVaidehi();
            break;
        case 12:
             calcAbsVaidehi();
            break;
        default:
            printf("Invalid choice!");
    }
    return 0;
}

//Avanish ...
