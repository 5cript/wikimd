#ifndef COMPONENTS_TEXT_HPP_INCLUDED
#define COMPONENTS_TEXT_HPP_INCLUDED

#include "component.hpp"
#include "adaption.hpp"
#include "parsers/parsing_results.hpp"

namespace WikiMarkup { namespace Components {

    struct Text : public IComponent
    {
        std::string data;

        std::string toMarkup() override;
        ParsingResult fromMarkup(std::string const& mu) override;
        MetaInfo getMetaInfo() const override;
        Text* clone() const override;
        std::string getRaw() const;
    };

} // Components
} // WikiMarkup

BOOST_FUSION_ADAPT_STRUCT(WikiMarkup::Components::Text, data)

#endif // COMPONENTS_TEXT_HPP_INCLUDED
