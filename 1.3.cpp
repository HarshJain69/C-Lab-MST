//Write a program to demonstrate the concept of all types of inheritance.

//a) Single inheritance

//b) Multiple inheritance

//c) Multilevel inheritance

//d) Hierarchical Inheritance

//e) Hybrid Inheritance

#include <iostream>
using namespace std;

// Base class for Single Inheritance
class Base {
public:
    void display() {
        cout << "Base class" << endl;
    }
};

// Derived class for Single Inheritance
class DerivedSingle : public Base {
public:
    void show() {
        cout << "Derived class (Single Inheritance)" << endl;
    }
};

// Base class for Multiple Inheritance
class Base1 {
public:
    void display1() {
        cout << "Base1 class" << endl;
    }
};

// Another base class for Multiple Inheritance
class Base2 {
public:
    void display2() {
        cout << "Base2 class" << endl;
    }
};

// Derived class for Multiple Inheritance
class DerivedMultiple : public Base1, public Base2 {
public:
    void show() {
        cout << "Derived class (Multiple Inheritance)" << endl;
    }
};

// Base class for Multilevel Inheritance
class BaseLevel1 {
public:
    void displayLevel1() {
        cout << "BaseLevel1 class" << endl;
    }
};

// Derived class for Multilevel Inheritance
class DerivedLevel2 : public BaseLevel1 {
public:
    void displayLevel2() {
        cout << "DerivedLevel2 class (Multilevel Inheritance)" << endl;
    }
};

// Base class for Hierarchical Inheritance
class BaseHierarchical {
public:
    void displayBase() {
        cout << "BaseHierarchical class" << endl;
    }
};

// Derived class 1 for Hierarchical Inheritance
class DerivedHierarchical1 : public BaseHierarchical {
public:
    void displayDerived1() {
        cout << "DerivedHierarchical1 class (Hierarchical Inheritance)" << endl;
    }
};

// Derived class 2 for Hierarchical Inheritance
class DerivedHierarchical2 : public BaseHierarchical {
public:
    void displayDerived2() {
        cout << "DerivedHierarchical2 class (Hierarchical Inheritance)" << endl;
    }
};

// Base class for Hybrid Inheritance
class BaseHybrid {
public:
    void displayBase() {
        cout << "BaseHybrid class" << endl;
    }
};

// Derived class 1 for Hybrid Inheritance
class DerivedHybrid1 : public BaseHybrid {
public:
    void displayDerived1() {
        cout << "DerivedHybrid1 class (Hybrid Inheritance)" << endl;
    }
};

// Another base class for Hybrid Inheritance
class BaseHybrid2 {
public:
    void displayBase2() {
        cout << "BaseHybrid2 class" << endl;
    }
};

// Derived class 2 for Hybrid Inheritance
class DerivedHybrid2 : public DerivedHybrid1, public BaseHybrid2 {
public:
    void displayDerived2() {
        cout << "DerivedHybrid2 class (Hybrid Inheritance)" << endl;
    }
};

int main() {
    cout << "---------- Single Inheritance ----------" << endl;
    DerivedSingle objSingle;
    objSingle.display();
    objSingle.show();

    cout << "\n---------- Multiple Inheritance ----------" << endl;
    DerivedMultiple objMultiple;
    objMultiple.display1();
    objMultiple.display2();
    objMultiple.show();

    cout << "\n---------- Multilevel Inheritance ----------" << endl;
    DerivedLevel2 objLevel;
    objLevel.displayLevel1();
    objLevel.displayLevel2();

    cout << "\n---------- Hierarchical Inheritance ----------" << endl;
    DerivedHierarchical1 objHierarchical1;
    objHierarchical1.displayBase();
    objHierarchical1.displayDerived1();

    DerivedHierarchical2 objHierarchical2;
    objHierarchical2.displayBase();
    objHierarchical2.displayDerived2();

    cout << "\n---------- Hybrid Inheritance ----------" << endl;
    DerivedHybrid2 objHybrid;
    objHybrid.displayBase();
    objHybrid.displayBase2();
    objHybrid.displayDerived1();
    objHybrid.displayDerived2();

    return 0;
}

/* Single Inheritance: DerivedSingle inherits from Base.
Multiple Inheritance: DerivedMultiple inherits from Base1 and Base2.
Multilevel Inheritance: DerivedLevel2 inherits from BaseLevel1.
Hierarchical Inheritance: DerivedHierarchical1 and DerivedHierarchical2 inherit from BaseHierarchical.
Hybrid Inheritance: DerivedHybrid1 inherits from BaseHybrid, and DerivedHybrid2 inherits from DerivedHybrid1 and BaseHybrid2.
*/