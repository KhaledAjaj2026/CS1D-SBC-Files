#ifndef H_PersonType
#define H_PersonType
#include <string>
using namespace std;
class personType
{
    public:
        /**
         * @brief Function to output the first name and last name in the form firstName lastName
         * 
         */
        void print() const;
        
        /**
         * @brief Set the Name object
         * 
         * @param first 
         * @param last 
         */
        void setName(string first, string last);
            //Function to set firstName and lastName according to
            //the parameters
            //Post: firstName = first; lastName = last;

        /**
         * @brief Get the Name object
         * 
         * @param first 
         * @param last 
         */
        void getName(string& first, string& last);
            //Function to return firstName and lastName via the parameters
            //Post: first = firstName; last = lastName;

        /**
         * @brief Construct a new person Type object
         * 
         * @param first 
         * @param last 
         */
        personType(string first, string last);
            //Constructor with parameters
            //Set firstName and lastName according to the parameters
            //Post: firstName = first; lastName = last;

        /**
         * @brief Construct a new person Type object
         * 
         */
        personType();
            //Default constructor;
            //Intialize firstName and lastName to empty string
            //Post: firstName = ""; lastName = "";
    private:
        string firstName; //store the first name
        string lastName; //store the last name
};
#endif