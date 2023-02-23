#include "Manual.hpp"   
#include "Book.hpp"
#include <regex>
#include <string>

Manual::Manual(std::string title, std::string author, int page_count, std::string device_name, bool is_digital, std::string url, bool visual_aid):Book(title, author, page_count, is_digital), device_name_{device_name}, manual_url_{url}, manual_visual_aid_{visual_aid}
{
}

void Manual::setDevice(const std::string &new_device)
{
    device_name_ = new_device;
}

std::string Manual::getDevice() const
{
    return device_name_;
}

bool Manual::setWebsite(const std::string &website)
{
    std::regex test("(http|https)\\:\\/\\/(www)\\.[a-zA-Z0-9]+\\.[a-zA-Z0-9]{2,}");
    if(std::regex_match(website,test))
    {
        manual_url_ = website;
    }
    else
    {
        manual_url_ = "Broken Link";
    }
    manual_website_ = true;
    return manual_website_;
}

std::string Manual::getWebsite() const
{
    return manual_url_;
}

void Manual::setVisualAid(const bool &visual_aid)
{
    manual_visual_aid_ = visual_aid;
}

bool Manual::hasVisualAid() const
{
    return manual_visual_aid_;
}

bool Manual::hasWebsite() const
{
    return manual_website_;
}




