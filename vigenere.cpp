#include "vigenere.h"
#include <string>
#include <iostream>



std::string Vigenere::encrypt(std::string msg){
    std::string encryptMsg = "";
    int i = 0;
    int temp1 = 0;
    int temp2 = 0;
    int newVal;
    for(int j = 0; j < msg.length(); j++){
        temp1 = int(msg[j]);
        temp2 = int(key[i]);
        if(temp1 != 32){
        newVal = (temp1 + temp2) % 26;
        char letter = newVal + 'A';
        encryptMsg += letter;
        } else encryptMsg += " ";
        if(i + 1 == key.length()) i = 0;
        else i++;
    }
    return encryptMsg;
}

std::string Vigenere::decrypt(std::string msg){
    std::string decryptMsg = "";
    int i = 0;
    int temp1 = 0;
    int temp2 = 0;
    int newVal;
    for(int j = 0; j < msg.length(); j++){
        temp1 = int(msg[j]);
        temp2 = int(key[i]);
        if(temp1 != 32){
        newVal = (temp1 - temp2 + 26) % 26;
        char letter = newVal + 'A';
        decryptMsg += letter;
        } else decryptMsg += " ";
        if(i + 1 == key.length()) i = 0;
        else i++;
    }
    return decryptMsg;
}

bool Vigenere::isEncrypted(std::string encryptedMsg, std::string decryptedMsg){
    if((decrypt(encryptedMsg) == decryptedMsg)) return true;
    else return false;
}

void Vigenere::setKey(std::string k){
    key = k;
}


int main(){
    Vigenere v = Vigenere("WAR");
    std::string temp = v.encrypt("CS IS COOL");
    std::cout << temp << std::endl;
    std::cout << v.decrypt(temp) << std::endl;
}