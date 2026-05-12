#include <stdio.h>
// global structure//

struct person
{

	int age ;
	float salary;

};


int main(int argc, char const *argv[])
{
	struct person person1, person2,person3={45,45000},person4;

	// person3 ={45,45000}; is direct initialization//


	person1.age=20;
	person1.salary=11250.50;


	person2.age=22;
	person2.salary=14250.50;

    person4=person3;
	person4=person3;

	printf("person 1 details:\n");
	printf("age:%d\n",person1.age );
	printf("salary:%.3f\n",person1.salary );

	printf("\n");

    printf("person 2 details:\n");
	printf("age:%d\n",person2.age );
	printf("salary:%.3f\n",person2.salary );

	printf("\n");


    printf("person 3 details:\n");
	printf("age:%d\n",person3.age );
	printf("salary:%.3f\n",person3.salary );


    printf("\n");


    printf("person 4 details:\n");
	printf("age:%d\n",person4.age );
	printf("salary:%.3f\n",person4.salary );


    getch();


}
/*

টাইপ- ১

struct structure_name {
    data_type member_variable_1;
    data_type member_variable_2;
    // ...
    data_type member_variable_N;
};

টাইপ- ২
struct structure_name structure_variable;



C প্রোগ্রামারদেরকে struct কীওয়ার্ড ব্যবহার করে বিভিন্ন ধরণের ডেটাকে একত্রিত করে 
ইউজার-ডিফাইন্ড ডেটা টাইপ তৈরি করার সুযোগ দেয়; এই ধরনের ডেটা টাইপগুলোকে 
স্ট্রাকচার বলা হয়। C-এর অন্য যেকোনো ডেটা টাইপের মতোই, ইউজার-ডিফাইন্ড 
স্ট্রাকচারের ভেরিয়েবলগুলো একটি মেমরি ব্লকে অ্যাড্রেস দখল করে এবং সেগুলোকে 
নির্দেশ করার জন্য পয়েন্টার ব্যবহার করা যায়। যে পয়েন্টার কোনো স্ট্রাকচারকে নির্দেশ 
করে, তাকে স্ট্রাকচার পয়েন্টার বলা হয়। C-তে স্ট্রাকচার এবং পয়েন্টার একসাথে 
স্ট্রাকচারের মেম্বারগুলোকে দক্ষতার সাথে অ্যাক্সেস করতে সাহায্য করে।

স্ট্রাকচার পয়েন্টার ডিক্লারেশন অনেকটা স্ট্রাকচার ভেরিয়েবল ডিক্লেয়ার করার মতোই, 
যেখানে struct কীওয়ার্ডের পরে এটি যে ধরণের স্ট্রাকচারকে নির্দেশ করবে তার নাম 
লিখতে হয়। একটি স্ট্রাকচার পয়েন্টার শুধুমাত্র ডিক্লারেশনের সময় ব্যবহৃত স্ট্রাকচারের 
অ্যাড্রেস ধারণ করতে পারে। C-তে স্ট্রাকচার এবং পয়েন্টার একসাথে স্ট্রাকচারের ভ্যালু 
অ্যাক্সেস করা এবং ফাংশনে ডেটা পাস করা সহজ করে তোলে।

ভূমিকা
C প্রোগ্রামারদেরকে স্ট্রাকচার ব্যবহার করে বিভিন্ন ধরণের ডেটাকে একত্রিত করে তাদের 
নিজস্ব ডেটা টাইপ তৈরি করার সুযোগ দেয়। উদাহরণস্বরূপ, যদি আমরা আমাদের 
সহপাঠীদের সম্পর্কে তথ্য সংরক্ষণ করতে চাই, তাহলে প্রতিটি student ভেরিয়েবলে 
শিক্ষার্থীর নাম, রোল নম্বর এবং গ্রেডের তথ্য থাকা উচিত। C-তে কোনো পূর্ব-নির্ধারিত 
ডেটা টাইপ একা এই সমস্ত তথ্য সংরক্ষণ করতে পারে না।

যেসব ক্ষেত্রে আমরা এমন তথ্য সংরক্ষণ করতে চাই যা কোনো ডেটা টাইপ ধারণ 
করতে পারে না, সেখানে প্রয়োজনীয় তথ্য ধারণ করার জন্য আমরা স্ট্রাকচার ব্যবহার 
করে আমাদের ডেটা টাইপ তৈরি করি।

একটি স্ট্রাকচারের বিভিন্ন উপাদানকে মেম্বার বলা হয়, উদাহরণস্বরূপ, উপরের ক্ষেত্রে, 
ছাত্রের নাম এবং রোল নম্বর হলো স্ট্রাকচারটির মেম্বার। অন্য সব ডেটা টাইপের মতো,
স্ট্রাকচার ভেরিয়েবল মেমরিতে সংরক্ষিত হয়, এবং আমরা তাদের অ্যাড্রেস সংরক্ষণ 
করার জন্য পয়েন্টার ব্যবহার করতে পারি।

স্ট্রাকচার পয়েন্টার যে মেমরি ব্লককে নির্দেশ করে, সেই ব্লকের মধ্যে স্ট্রাকচার ভেরিয়েবলের 
অ্যাড্রেসকে নির্দেশ করে। এই পয়েন্টারটি স্ট্রাকচার মেম্বারদের মান অ্যাক্সেস এবং পরিবর্তন 
করতে ব্যবহার করা যেতে পারে। এইভাবে, C-তে স্ট্রাকচার এবং পয়েন্টার ব্যবহার করে 
সুবিধাজনকভাবে ইউজার-ডিফাইন্ড ডেটা টাইপ তৈরি এবং অ্যাক্সেস করা যায়।

পয়েন্টার দিয়ে স্ট্রাকক্সচারের একটি উদাহারন নিচে দিয়ে দিলাম

#include<stdio.h>
#include<string.h>

struct User {
    // declare members of structure User
    char name[40];
    char role[10];
    int age;
};

int main() {
    // declare variables of type User
    struct User user_1, user_2;
    
    // initialising member of user_1
    strcpy (user_1.name, "Eshaan"); 
    strcpy (user_1.role, "Admin");  
    user_1.age = 21;      
    
    // initialising member of user_1
    strcpy (user_2.name, "Ishita"); 
    strcpy (user_2.role, "Customer");  
    user_2.age = 26;      
    
    // print the details of the User user_1;  
    printf("Details of User 1 :\n");
    printf("\tName : %s\n", user_1.name);
    printf("\tAge : %d\n", user_1.age);
    printf("\tRole : %s\n", user_1.role);
    
    // print the details of the User user_2;  
    printf("Details of User 2 :\n");
    printf("\tName : %s\n", user_2.name);
    printf("\tAge : %d\n", user_2.age);
    printf("\tRole : %s\n", user_2.role);

    return 0;
}

উদাহারন ২ঃ ডট অপারেটর ব্যবহার করে স্ট্রাকচারের মেম্বার অ্যাক্সেস করা
#include<stdio.h>

// create a structure Coordinate
struct Coordinate {
    // declare structure members
    int x,y;
};

int main() {
    struct Coordinate first_point;
    // declaring structure pointer
    struct Coordinate *cp;
    cp = &first_point;
    
    (*cp).x = 5;
    (*cp).y = 10;
    
    printf("First coordinate (x, y) = (%d, %d)", (*cp).x, (*cp).y);
    return 0;
}


উদাহারন ৩ঃ এরো অপারেটর ব্যবহার করে স্ট্রাকচারের মেম্বার অ্যাক্সেস করা
#include<stdio.h>

struct Student {
    char name[30];
    int age;
    int roll_number;
};

int main() {
    struct Student student_1;
    struct Student *sp = &student_1;
    
    printf ("Enter the details of the Student (student_1)\n");  
    printf ("\tName: ");  
    scanf ("%s", sp->name);  
    printf ("\tAge: ");  
    scanf ("%d", &sp->age);  
    printf ("\tRoll Number: ");  
    scanf ("%d", &sp->roll_number);  
    
    printf ("\n Display the details of the student_1 using Structure Pointer\n");  
    printf ("\tName: %s\n", sp->name); 
    printf ("\tAge: %d\n", sp->age);   
    printf ("\tRoll Number: %d", sp->roll_number);  
    
    return 0;
}

উদাহারন ৩ঃ ফাংশন আর্গুমেন্টে স্ট্রাকচার পয়েন্টার

#include<stdio.h>
#include<math.h>

struct Coordinate {
    int x;
    int y;
};

float getDistance(struct Coordinate *X, struct Coordinate *Y) {
    int x_diff = X->x - Y->x;
    int y_diff = X->y - Y->y;
    
    float distance = sqrt((x_diff * x_diff) + (y_diff * y_diff));
    
    return distance;
}

int main() {
    struct Coordinate a,b;
    
    a.x = 5, a.y = 6;
    b.x = 4, b.y = 7;
    
    float distance = getDistance(&a, &b);
    printf("Distance between points (%d, %d) and (%d, %d) = %.3f", a.x, a.y, b.x, b.y, distance);
    
    return 0;
}


*/
