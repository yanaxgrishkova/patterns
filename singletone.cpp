
// Singleton.h
class Singleton
{
  private:
    static Singleton * p_instance;
    Singleton() {
    Singleton( const Singleton& );  
    Singleton& operator=( Singleton& );
  public:
    static Singleton * getInstance() {
        if(!p_instance)           
            p_instance = new Singleton();
        return p_instance;
    }
};

   **************************************

// Singleton.cpp
#include "Singleton.h"
  
Singleton* Singleton::p_instance = 0;

// Singleton.h
class Singleton
{
private: 
    Singleton() {}
    Singleton( const Singleton&);  
    Singleton& operator=( Singleton& );
public:
    static Singleton& getInstance() {
        static Singleton  instance;
        return instance;
    }    
}; 
