#include "lexer.hpp"

lexer::Lexer::Lexer(void* input){
    this->input = input;
}

// TODO
token::Token lexer::Lexer::nextToken(){
    token::token_type type = token::none;
    void* value = nullptr;
    int line = 0;
    int column = 0;

    token::Token token = token::Token(type,value,line,column);
    return token;
}