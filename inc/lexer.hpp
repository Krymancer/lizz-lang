#include "token.hpp"

namespace lexer {

class Lexer {
    private:
        void* input = nullptr;
    public:
        Lexer(void*);
        ~Lexer();

        token::Token nextToken();
};

}  // namespace lexer