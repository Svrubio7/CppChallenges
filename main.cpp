#include <iostream>
#include <string>

class LibraryItem{
    public:
    int itemId, state;

    LibraryItem(int i) : itemId(i), state(0) {}

    virtual void checkout() const{
        std::cout << "Checkout book" << std::endl;
    }
    virtual void return_item() const{
        std::cout << "Item returned" << std::endl;
        
    }
};