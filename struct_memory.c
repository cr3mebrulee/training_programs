#include <stdio.h>

typedef struct _person {
    char *first_Name;
    char *last_Name;
    char *title;
    unsigned int age;
} Person;

typedef struct _alternatePerson {
    char *firstName;
    char *secondName;
    char *title;
    short *age;
} AlternatePerson;

int main()
{
    Person person;
    AlternatePerson otherPerson;
    Person *head = NULL;
    char *str = "Hello";

    printf("Size of Person structre: %ld\n", sizeof(Person));
    printf("Size of AlternatePerson structure: %ld\n", sizeof(AlternatePerson));
    printf("Size of string: %ld\n", sizeof(str));
    printf("Size of pointer to Person structure: %ld\n", sizeof(head));
    printf("Address of person strucutre: %p\n", (void *)&person);
    printf("Address of AlternatePerson strucutre: %p\n", (void *)&otherPerson);
    printf("Address of pointer to string: %p\n", (void *)&str);
}
