#ifndef NOVEL_HPP_
#define NOVEL_HPP_

#include <iostream>
#include <string>
#include "Book.hpp"
#include <vector>

struct review {
    double score_;
    std::string rating_;
};

class Novel: public Book
{
    private:
    std::string novel_genre_;
    vector<std::string> novel_characters_;
    vector<review> novel_reviews_;
    double novel_average_rating_;
    bool novel_film_adaptation_;

    public:
    /**
    Default constructor.
    Default-initializes all private members.
    */
    Novel() = default;

    /**
    Parameterized constructor.
    @param     : The title of the book (a string)
    @param     : The author of the book (a string)
    @param     : The number of pages in the book (a positive integer)
    @param     : The genre of the novel (a string)
    @param     : A flag indicating whether the book is in digital form
                with DEFAULT VALUE False (a Boolean)
    @param     : A flag indicating whether there is a film adaptation
                for this novel with DEFAULT VALUE False (a Boolean)
    */
   Novel::Novel(std::string title, std::string author, int page_count, std::string novel_genre, bool is_digital = false, bool novel_film_adaptation);

   /**
   @return   : the value of the genre private member
   **/
   std::string getGenre() const;

   /**
   @param  : a reference to string indicating the genre of the book
   @post   : sets genre_ private member to the
            value of the parameter
   **/
   void setGenre(const std::string &novel_genre);


    /**
    @return   : the vector containing the list of characters for this novel
    **/
    vector<std::string> getCharacterList() const;

    /**
    @return    : a string of all the characters in the
               character_list_ private member, concatenated
               and separated by a space " " .
               For example: "character1 character2 character3"
    **/
    std::string getCharacterListString() const;

    /**
    @param  : a reference to string indicating a character
    @post   : inserts the character into the character_list_ vector
    **/
    void addCharacter(const std::string &novel_character);

    /**
    @return   : the value of the film_adaptation_ private member
    **/
    bool hasFilmAdaptation() const;

    /**
    @post   : sets has_film_adaptation_ private member to true
    **/
    void setFilmAdaptation(); 

    /**
    @return   : the value of the average rating private member
    **/
    double getAverageRating() const;

    /**
    @param    : a reference to floating point number (double) indicating
              the score of the  review
    @param    : a reference to string indicating the rating of the review
    @return   : creates and returns a review data type with
              score and rating as indicated by the parameters
    */
    review createReview(const double &novel_score, const std::string &novel_rating);

    /**
    @param  : a reference to review object
    @post   : inserts the review argument into the reviews_ vector
    **/
    void addReview(const review &novel_review);


    /**
    @post   : retrieves all scores from the reviews_ vector and
            computes the average to set value of the average_rating_
            private member
    **/  
    void calculateAverageRating();

};
#endif
