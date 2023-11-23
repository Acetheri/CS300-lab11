#ifndef vigenere_h
#define vigenere_h

#include <string>

class Vigenere{
    private:

    std::string key;


    public:
    //! Constructor of class
    /*! Class constructor of vigenere class. Takes in k to put into Key value
    */
    Vigenere(std::string k){
        key = k;
    }
    //! Denstructor of class
    /*! Class denstructor of vigenere class. 
    */
    ~Vigenere(){}
    //! encrypts msg with key
    /*! encrypts a message with the key of the class
    / @param msg a string to be encrypted
    / @return an encrypted Message as a string   
    */
    std::string encrypt(std::string msg);
    //! Decrypts msg with key
    /*! Decrypts a message with the key of the class
    / @param msg a string to be decrypted
    / @return a decrypted Message as a string   
    */
    std::string decrypt(std::string msg);

    //! checks if an encryption is correct
    /*! Encrypts then checks if encrypted message provided is correct
    / @param msg a string to be encrypted
    / @param encryptedMsg provided encrypted message
    / @return boolean value of function 
    */
    bool isEncrypted(std::string msg, std::string encryptedMsg);

    //! sets a new key
    /*! Changes the key of the Vigenere class
    */
    void setKey(std::string k);
};

#endif