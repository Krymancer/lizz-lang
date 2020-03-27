namespace token {

enum token_type {
    none,
    symbol,
    number,
    string,
};

class Token {
   private:
    void* value = nullptr;
    token_type type = none;
    int line, column;

   public:
    Token(token_type, void*, int, int);
    ~Token();
};

}  // namespace token