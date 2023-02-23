#include "Book.hpp"
#include "Novel.hpp"
#include <string>

Novel::Novel(std::string title, std::string author, int page_count, std::string novel_genre, bool is_digital, bool novel_film_adaptation):Book(title, author, page_count, is_digital), novel_genre_{novel_genre}, novel_film_adaptation_{novel_film_adaptation}
{
}

std::string Novel::getGenre() const
{
    return novel_genre_;
}

void Novel::setGenre(const std::string &novel_genre)
{
    novel_genre_ = novel_genre;
}

std::vector<std::string> Novel::getCharacterList() const
{
    return novel_characters_;
}

std::string Novel::getCharacterListString() const
{
    std::string character_list = "";
    for(int i = 0; i < novel_characters_.size(); i++)
    {
            character_list += novel_characters_[i];
            character_list += " ";
    }
    return character_list;
}

void Novel::addCharacter(const std::string &novel_character)
{
    novel_characters_.insert(novel_characters_.begin() + 1, novel_character);
}

bool Novel::hasFilmAdaptation() const
{
    return novel_film_adaptation_;
}

void Novel::setFilmAdaptation()
{
    novel_film_adaptation_ = true;
}

double Novel::getAverageRating() const
{
    return novel_average_rating_;
}

review Novel::createReview(const double &novel_score, const std::string &novel_rating)
{
    review new_novel_review;
    new_novel_review.score_ = novel_score;
    new_novel_review.rating_ = novel_rating;
    return new_novel_review;
}

void Novel::addReview(const review &novel_review)
{
    novel_reviews_.insert(novel_reviews_.begin() + 1, novel_review);
}

void Novel::calculateAverageRating()
{
    double review_total = 0.0;
    for(int i = 0; i < novel_reviews_.size(); i++)
    {
        review_total += novel_reviews_[i].score_;
    }
    if(i == novel_reviews_.size() - 1)
    {
        review_total/novel_reviews_.size();
    }
}
