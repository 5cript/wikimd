#include "table.hpp"

#include "parsers/parse.hpp"
#include "parsers/table.hpp"
#include "post_processors/table.hpp"

namespace WikiMarkup { namespace Components {
//####################################################################################
    std::string Table::toMarkup()
    {
        return "table";
    }
//-----------------------------------------------------------------------------------
    void Table::fromMarkup(std::string const& mu)
    {
        using namespace WikiMarkup::Components::Parser;
        using namespace WikiMarkup::Components::PostProcessors;

        TYPEDEF_GRAMMAR(table_grammar);

        *this = parse <grammar> (mu);
        postProcessTable(*this);
    }
//####################################################################################
} // namespace Components
} // namespace WikiMarkup
