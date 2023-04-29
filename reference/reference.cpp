// reference are the extensio of pointer
// reference has to reference an already existing variable.
// they don't really ocupy memory or has memory address.
// reference cannot be refer to more than one varaible.
 

 #include <iostream>
 using namespace std;

 // now if we need to change the value of a using a function, here is what we have to do. let's look at the following codes to see the difference.
void Increament(int value){
    value++;
}

// if we change the value using pointer
void ptr_increment(int* value){ // we are now accessing the address of th variable 'a' and will make a change there.
    (*value)++; // we have to derefencre the variable to make a change
}

// we can make the code even more nicer suing the reference, and we don't have to use the pointer anymore.
void ref_increament(int& value){
    value++; // it shows that we don't have to derefence anything.
}
 
int main(){
    int a = 5;
    //int* var = &a; // this is a pointer where var is holding the memory address of a and if we change the value  of var, the value of add will be changed.

    int& ref = a; // here the & is after the type and this is how the reference is made. this means that this is equal to an existhing variable.
    // this is also called as an allias
    // here if we change ref to anything, the value of the a will be the changing value. watch

    ref = 10; // the value of a will be 10 now.

    cout << a << endl;

    // here is the result after chanig value using the funcion increment
    Increament(a);
    cout << "after chaning the value without pointer or refecence " << a << endl; // looks like the value didn't change.

    // result after changing using pointer
    ptr_increment(&a); // here we have to use & sign so that the address can be accesssed
    cout << "after chaning using pointer " << a<< endl; // the value is now 11

    ref_increament(a);
    cout << "after chaning using reference " << a << endl; // the value is now 12



    int b = 15;
    int c = 20;

    int& ref1 = b; // if we do this, we cannot reference ref1 to anythign anymore, otherwise the value of the first refering value will refer to the later refering value
    ref1 = c; // if we do this, the b will point to the value of c automatically and the the value will be as follows. b = 20, c = 20;

    cout << "the value of ref1 " << ref1 << endl; // so the reference variable cannot refer to more than one variable.



    //if we need to use a variable (name ) more than twice, here is how we should do
    int* ref2 = &b;
    *ref2 = 3; // always dereference.   the value of b will be now 3, not 15

    ref2 = &c;
    *ref2 = 5; // again reference to change to value.           the value will be now 5, not 20/

    cout << "after changing using pointer " << b << endl;
    cout << "after changing using pointer " << c << endl;
}
