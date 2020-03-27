#include "token.hpp"

token::Token::Token(token::token_type type, void* value, int line, int column){
    this->type = type;
    this->value = value;
    this->line = line;
    this->column = column;
}