#include "Textbook.hpp"
#include "Book.hpp"
#include <string>

Textbook::Textbook(std::string subject, grade_level textbook_grade_level = NONE, bool has_review_questions = false):Book(title, author, page_count, is_digital), textbook_subject_(subject), textbook_grade_level_(textbook_grade_level), has_review_questions_(has_review_questions) 
{
}

void Textbook::setSubject(const std::string &textbook_subject)
{
    textbook_subject_ = textbook_subject;
}

std::string getSubject() const
{
    return textbook_subject_;
}

void setGradeLevel(const grade_level &book_grade_level)
{
    textbook_grade_level = book_grade_level;
}

std::string getGradeLevel() const
{
    switch(textbook_grade_level)
    {
        case 1:
            return "ELEMENTARY";
            break;
        case 2:
            return "JUNIOR HIGH";
            break;
        case 3:
            return "HIGH SCHOOL";
            break;
        case 4: 
            return "COLLEGE";
            break;
        return "NONE";
    }
}

void setReviewQuestions()
{
    has_review_questions_ = true;
}

bool checkReviewQuestions() const
{
    return has_review_questions;
}
