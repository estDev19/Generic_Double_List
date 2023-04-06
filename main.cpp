#include "List.cpp"
#include "Person.h"
int main() {

    List<Person> *list = new List<Person>;

    list->addOnTail( new Person("Ana", 25, "1234"));
    list->addOnTail(new Person("Juan", 12, "4689"));
    list->addOnTail(new Person("Marco", 54, "9876"));
    list->addOnTail(new Person("John", 67, "76543"));

    cout<<"Size = "<<list->size()<<endl;
    cout<<list->toString()<<endl;
    list->removeHead();
    cout<<"Size = "<<list->size()<<endl;
    cout<<list->toString()<<endl;

    delete list;

    return 0;
}