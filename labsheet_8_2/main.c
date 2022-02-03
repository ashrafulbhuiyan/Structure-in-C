#include <stdio.h>
#include <stdlib.h>

struct address{
    int fl_no;
    char road[32];
    int zipcode;
    char district[12];
};

struct records{
    int emp_id;
    char name[32];
    char designation[28];
    struct address adr;
    double salary;
    };
int main()
{
    struct records employee[5]={
        {8,"Md. Rasid", "Chief Engineer", {10/2,"Nazmuddin Road", 1205, "Dhaka"},63000.001},
        {9, "Karim", "Assitant Engineer", {128/8,"Nazmuddin Road", 1205, "Dhaka"},48000.22},
        {10,"Md. Kabir", " Assistant Engineer", {10/2,"Nazmuddin Road", 1205, "Dhaka"},47000.31},
        {11,"Md. Rohan", "Sub-Assistant Engineer", {10/2,"Nazmuddin Road", 1205, "Dhaka"},34000.001},
        {12,"Md. Rafiq", "Sub-Assistant Engineer", {10/2,"Nazmuddin Road", 1205, "Dhaka"},32000.2}

        };
    int i;
    for (i=0; i<5; i++)
    {
       printf("ID: %d \nName: %s \nDesignation: %s\nfloat no: %d \nRoad: %s \nZip: %d \nDistrict: %s \nSalary: %lf \n\n\n",
              employee[i].emp_id,employee[i].name,employee[i].designation,
              employee[i].adr.fl_no,employee[i].adr.road,employee[i].adr.zipcode,
              employee[i].adr.district,employee[i].salary);
    }

    return 0;
}
