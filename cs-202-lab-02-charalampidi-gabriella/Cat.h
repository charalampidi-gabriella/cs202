

#ifndef DEMO_CAT_H
#define DEMO_CAT_H


class Cat {
private:
    std::string m_breed = "";

public:
    void setBreed(std::string breed);
    explicit Cat(const std::string &breed);
    void printBreed();

    virtual ~Cat();

public:
    void speak();
};


#endif //DEMO_CAT_H
