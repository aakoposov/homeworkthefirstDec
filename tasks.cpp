#include <iostream>
#include <cmath>


double areaOfTrap(double b1, double b2, double h) { 
    return 0.5 * (b1 + b2) * h;
}


double circleLength(double rad) { 
    return 2 * 3.14 * rad;
}

double circleArea(double rad) { 
    return 3.14 * pow(rad, 2);
}


double triangleArea(double base, double height) { 
    return 0.5 * base * height;
}

double hypot(double side1, double side2) { 
    return sqrt(pow(side1, 2) + pow(side2, 2));
}


int summaOfDigits(int number) {
    int summa = 0;
    while (number != 0) {
        summa += number % 10;
        number /= 10; 
    }
    return summa;
}


void decToPolar(double x, double y, double& r, double& theta) { 
    r = sqrt(x * x + y * y);  
    theta = atan2(y, x);
}


void polarToDec(double r1, double theta1, double& x1, double& y1) { 
    x1 = r1 * cos(theta1); 
    y1 = r1 * sin(theta1);
}


void equation(double a, double b, double c) { 
    double discr = b * b - 4 * a * c;

    if (discr > 0) {                          
        double root1 = (-b + sqrt(discr)) / (2 * a);
        double root2 = (-b - sqrt(discr)) / (2 * a);

        std::cout << "The roots of the quadratic equation are: " << root1 << " and " << root2 << std::endl;
    }
    else if (discr == 0) {                    
        double root = -b / (2 * a);

        std::cout << "The quadratic equation has a double root: " << root << std::endl;
    }
    else {                                    
        std::cout << "The quadratic equation has complex roots." << std::endl;
    }
}


void findMedians(double a, double b, double c) {  

    double m1 = 0.5 * std::sqrt(2 * b * b + 2 * c * c - a * a); 
    double m2 = 0.5 * std::sqrt(2 * a * a + 2 * c * c - b * b);
    double m3 = 0.5 * std::sqrt(2 * a * a + 2 * b * b - c * c);


    double m1_new = 0.5 * std::sqrt(2 * m2 * m2 + 2 * m3 * m3 - m1 * m1); 
    double m2_new = 0.5 * std::sqrt(2 * m1 * m1 + 2 * m3 * m3 - m2 * m2);
    double m3_new = 0.5 * std::sqrt(2 * m1 * m1 + 2 * m2 * m2 - m3 * m3);


    std::cout << "The medians of a triangle whose sides are the medians of the original triangle: " << std::endl; 
    std::cout << "m1_new: " << m1_new << std::endl;
    std::cout << "m2_new: " << m2_new << std::endl;
    std::cout << "m3_new: " << m3_new << std::endl;

}


void calculateTime(int seconds) { 
    int hours = seconds / 3600;  
    int minutes = (seconds % 3600) / 60;  

    std::cout << "It's been " << hours << " hours and " << minutes << " minutes since the beginning of the day." << std::endl; 
}


void triangleIsosceles(int a, int b, int c) { 
    if ((a == b) || (a == c) || (b == c)) {         
        std::cout << "The triangle is isosceles." << std::endl;
    }
    else {
        std::cout << "The triangle is not isosceles." << std::endl;
    }
}


void discount(int a) { 
    if (a > 1000) {
        std::cout << "Since the purchase price is more than 1000 rubles, then your discount is 10%. Your price is " << a * 0.9 << std::endl; 
    }
    else {
        std::cout << "There will be no discount. Your price is " << a << " rubles" << std::endl; 
  

void recommendWeight(double heighthuman, double weight) { 
    double idealWeight = heighthuman - 100; 

    if (weight < idealWeight) {
        std::cout << "You should gain weight. The ideal weight for you: " << idealWeight << " kg\n"; 
    }
    else if (weight > idealWeight) {
        std::cout << "You should lose weight. The ideal weight for you: " << idealWeight << " kg\n"; 
    }
    else {
        std::cout << "You're already at your ideal weight!\n"; 
    }
}


bool multiplication(int number1, int number2, int answer) { 
    return answer == number1 * number2;
}


double calculateCost(double duration, int dayOfWeek) {
    double cost = duration * 2; 
    if (dayOfWeek == 6 || dayOfWeek == 7) {
        cost *= 0.8; 
    }

    return cost;
}


void monthAndSeason(int month) { 
    std::string monthName;
    std::string season;

    if (month == 1) {
        monthName = "January";
        season = "Winter";
    }
    else if (month == 2) {
        monthName = "February";
        season = "Winter";
    }
    else if (month == 3) {
        monthName = "March";
        season = "Spring";
    }
    else if (month == 4) {
        monthName = "April";
        season = "Spring";
    }
    else if (month == 5) {
        monthName = "May";
        season = "Spring";
    }
    else if (month == 6) {
        monthName = "June";
        season = "Summer";
    }
    else if (month == 7) {
        monthName = "July";
        season = "Summer";
    }
    else if (month == 8) {
        monthName = "August";
        season = "Summer";
    }
    else if (month == 9) {
        monthName = "September";
        season = "Autumn";
    }
    else if (month == 10) {
        monthName = "October";
        season = "Autumn";
    }
    else if (month == 11) {
        monthName = "November";
        season = "Autumn";
    }
    else if (month == 12) {
        monthName = "December";
        season = "Winter";
    }
    else {
        std::cout << "Invalid month number!" << std::endl;
        return;
    }

    std::cout << "The month is " << monthName << "." << std::endl;
    std::cout << "The season is " << season << "." << std::endl;
}


bool luckyNumber(int number) { 

    int left = number / 1000;  
    int right = number % 1000;
    int lsumma = left % 10 + (left / 10) % 10 + left / 100;
    int rsumma = right % 10 + (right / 10) % 10 + right / 100;

    if (lsumma == rsumma) {
        return true;
    }
    else {
        return false;
    }
}


void kopeyka(int number) {
    int lastDigit = number % 10;

    if (number >= 11 && number <= 19) {
        std::cout << number << " kopeek" << std::endl;
    }
    else if (lastDigit == 1) {
        std::cout << number << " kopeyka" << std::endl;
    }
    else if (lastDigit >= 2 && lastDigit <= 4) {
        std::cout << number << " kopeyki" << std::endl;
    }
    else {
        std::cout << number << " kopeek" << std::endl;
    }
}


bool palindrome(int number) {
    int initNum = number;
    int reverse = 0;

    while (initNum > 0) {
        int digit = initNum % 10;
        reverse = reverse * 10 + digit;
        initNum /= 10;
    }

    if (number == reverse) {
        return true;
    }
    else {
        return false;
    }
}


bool initialGreaterThanB(int number, int b) { 
    int initialNum = 1;

    while (number > 0) { 
                         
        int digit = number % 10;
        initialNum *= digit;
        number /= 10;
    }


    if (initialNum > b) {
        return true;
    }
    else {
        return false;
    }
}

bool sumDivisibleBy7(int number) { 
    int sum = 0;

    while (number > 0) {  
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    if (sum % 7 == 0) {
        return true;
    }
    else {
        return false;
    }
}


bool fitRectangle(double a, double b, double c, double d) { 

    if ((a <= c && b <= d) || (a <= d && b <= c)) { 
        return true;
    }
    else {
        return false;
    }
}

int main() {
    
    double base1, base2, height;
    std::cout << "Enter the length of the first base of the trapezoid: "; 
    std::cin >> base1;
    std::cout << "Enter the length of the second base of the trapezoid: ";
    std::cin >> base2;
    std::cout << "Enter the height of the trapezoid: ";
    std::cin >> height;

    double area = areaOfTrap(base1, base2, height); 
    std::cout << "Trapezoid Area: " << area << std::endl; 


    
    double rad;
    std::cout << "Enter the radius of the circle: "; 
    std::cin >> rad;

    double length = circleLength(rad); 
    std::cout << "Circle Length: " << length << std::endl; 

    double area1 = circleArea(rad); 
    std::cout << "Circle Area: " << area1 << std::endl; 


    
    double base, height1;
    std::cout << "Enter the base and height of the triangle: "; 
    std::cin >> base >> height1;

    double triangle_Area = triangleArea(base, height1); 
    std::cout << "Area of the triangle: " << triangle_Area << std::endl;

    double side1, side2;
    std::cout << "Enter the lengths of the two sides of the triangle: "; 
    std::cin >> side1 >> side2;

    double hyp = hypot(side1, side2); 
    std::cout << "Hypotenuse of the triangle: " << hyp << std::endl;


    
    int number;
    std::cout << "Enter a four-digit number: "; 
    std::cin >> number;

    int summa = summaOfDigits(number); 
    std::cout << "The sum of the digits of the number is: " << summa << std::endl; 


    
    double x, y, r, theta;
    std::cout << "Enter the value of x: "; 
    std::cin >> x;
    std::cout << "Enter the value of y: ";
    std::cin >> y;
    decToPolar(x, y, r, theta); 

    std::cout << "The polar coordinates are: (" << r << ", " << theta << " radians)" << std::endl; 


    
    double r1, theta1, x1, y1;
    std::cout << "Enter polar coordinates (r, theta): "; 
    std::cin >> r1 >> theta1;
    polarToDec(r1, theta1, x1, y1); 

    std::cout << "The Cartesian coordinates are: (" << x1 << ", " << y1 << ")" << std::endl; 


    
    double a, b, c;
    std::cout << "Enter the coefficients of the quadratic equation (a, b, c): "; 
    std::cin >> a >> b >> c;

    equation(a, b, c);


    double side_a, side_b, side_c;
    std::cout << "Enter the value of side a: "; 
    std::cin >> side_a;
    std::cout << "Enter the value of side b: ";
    std::cin >> side_b;
    std::cout << "Enter the value of side c: ";
    std::cin >> side_c;

    findMedians(side_a, side_b, side_c); 


    
    int sec;  
    std::cout << "Enter the number of the second of the day: "; 
    std::cin >> sec;
    calculateTime(sec); 

    
    int side_aIso, side_bIso, side_cIso;
    std::cout << "Enter the value of side a: "; 
    std::cin >> side_aIso;
    std::cout << "Enter the value of side b: ";
    std::cin >> side_bIso;
    std::cout << "Enter the value of side c: ";
    std::cin >> side_cIso;

    triangleIsosceles(side_aIso, side_bIso, side_cIso); 


    
    int price;
    std::cout << "Enter the price in rubles: "; 
    std::cin >> price;

    discount(price); 


    
    double heighthuman, weight;

    std::cout << "Enter your height (in centimeters): "; 
    std::cin >> heighthuman;

    std::cout << "Enter your weight (in kilograms): "; 
    std::cin >> weight;

    recommendWeight(heighthuman, weight); 


    
    std::srand(std::time(0));  

    int numberOne = std::rand() % 9 + 1;  
    int numberTwo = std::rand() % 9 + 1;

    std::cout << "Enter the result of multiplying the numbers: " << numberOne << " and " << numberTwo << ": "; 
    int answer;
    std::cin >> answer;
    if (multiplication(numberOne, numberTwo, answer)) { 
        std::cout << "You're right, congratulations!\n";
    }
    else {
        std::cout << "Unfortunately, you made a mistake. Try again!\n";
    }


    
    double duration;
    int dayOfWeek;

    std::cout << "Enter the duration of the conversation (in minutes): "; 
    std::cin >> duration;

    std::cout << "Enter the day of the week (1-7): "; 
    std::cin >> dayOfWeek;

    double cost = calculateCost(duration, dayOfWeek); 

    std::cout << "The final cost of the conversation is: $" << cost << std::endl; 


    
    int month;

    std::cout << "Enter the month number (1-12): "; 
    std::cin >> month;

    monthAndSeason(month); 


    
    int numberLuc;

    std::cout << "Enter a six-digit number: "; 
    std::cin >> numberLuc;

    if (numberLuc >= 100000 && numberLuc <= 999999) {
        if (luckyNumber(numberLuc)) {
            std::cout << "The number is a lucky number!" << std::endl; 
        }
        else {
            std::cout << "The number is not a lucky number!" << std::endl; 
        }
    }


    
    int numberKop;

    std::cout << "Enter a number between 1 and 99: "; 
    std::cin >> numberKop;

    if (numberKop >= 1 && numberKop <= 99) {
        kopeyka(numberKop);
    }


    
    int numberPal;
    std::cout << "Enter a four-digit number: "; 
    std::cin >> numberPal;

    if (palindrome(numberPal)) {
        std::cout << "The number is a palindrome." << std::endl; 
    }
    else {
        std::cout << "The number is not a palindrome." << std::endl; 
    }



    int numberThreeDigit;
    int B;
    std::cout << "Enter a three-digit number: "; 
    std::cin >> numberThreeDigit;
    std::cout << "Enter the value of b: "; 
    std::cin >> B;

    if (initialGreaterThanB(numberThreeDigit, B)) {
        std::cout << "The product of the digits is greater than the number b." << std::endl; 
    }
    else {
        std::cout << "The product of the digits is not greater than the number b." << std::endl; 
    }

    if (sumDivisibleBy7(numberThreeDigit)) {
        std::cout << "The sum of the digits is a multiple of 7." << std::endl; 
    }
    else {
        std::cout << "The sum of the digits is not a multiple of 7." << std::endl; 
    }


    
    double A1, B1, C1, D1;

    std::cout << "Enter the sides of the rectangles (a, b, c, d): "; 
    std::cin >> A1 >> B1 >> C1 >> D1;

    if (fitRectangle(A1, B1, C1, D1)) { 
        std::cout << "Rectangle with sides " << A1 << " and " << B1 << " can fit inside rectangle with sides " << C1 << " and " << D1 << std::endl;
    }
    else {
        std::cout << "Rectangle with sides " << A1 << " and " << B1 << " cannot fit inside rectangle with sides " << C1 << " and " << D1 << std::endl;
    }

    return 0;
}