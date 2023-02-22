#include "Book.hpp"
#include "Novel.hpp"
#include <string>

Novelbook::Novelbook(std::string novel_genre, bool novel_film_adaptation):Book(title, author, page_count, is_digital), novel_genre_(novel_genre), novel_film_adaptation_(novel_film_adaptation)
{
}

std::string getGenre() const
{
    return novel_genre_;
}

void setGenre(const std::string &novel_genre)
{
    novel_genre_ = novel_genre;
}

std::vector<std::string> getCharacterList() const
{
    return novel_characters_;
}

std::string getCharacterListString() const
{
    return 
}

void addCharacter(const std::string &novel_character)
{
    novel_characters_.insert(novel_characters_.begin() + 1, novel_character);
}

bool hasFilmAdaptation() const
{
    return novel_film_adaptation_;
}

void setFilmAdaptation()
{
    novel_film_adaptation_ = true;
}

double getAverageRating() const
{
    return novel_average_rating_;
}

review createReview(const double &novel_score, const std::string &novel_rating)
{
    review new_novel_review;
    new_novel_review.score_ = novel_score;
    new_novel_review.rating_ = novel_rating;
    return new_novel_review;
}

void addReview(const review &novel_review)
{
    novel_reviews_.insert(novel_reviews_.begin() + 1, novel_review);
}

void calculateAverageRating()
{
    double review_total = 0.0;
    for(int i = 0; i < novel_reviews_.size(); i++)
    {
        if(i == novel_reviews.size() - 1)
        {
            review_total/novel_reviews_.size();
            break;
        }
        review_total += novel_reviews_[i].rating_;
    }
}