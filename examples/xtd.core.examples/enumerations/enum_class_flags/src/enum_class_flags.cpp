#include <xtd/as>
#include <xtd/console>
#include <xtd/enum_class>

using namespace xtd;

enum_class_(, text_attribute,
  normal = 0b0,
  bold = 0b1,
  italic = 0b10,
  underline = 0b100,
  strikeout = 0b1000
);

flags_attribute_(, text_attribute);

auto main()->int {
  console::write_line("name = {}", text_attribute::bold | text_attribute::italic);
  console::write_line("value = {}", enum_object(text_attribute::bold | text_attribute::italic).to_int32());
  console::write_line("as<int> = {}", as<int>(text_attribute::bold | text_attribute::italic));
  console::write_line("values = {}", enum_object<>::get_values_as_int32<text_attribute>());
  console::write_line("names = {}", enum_object<>::get_names<text_attribute>());
  console::write_line("entries = {}", enum_object<>::get_entries_as_int32<text_attribute>());
}

// This code produces the following output :
//
// name = bold, italic
// value = 3
// as<int> = 3
// values = [0, 1, 2, 4, 8]
// names = [normal, bold, italic, underline, strikeout]
// entries = [(0, normal), (1, bold), (2, italic), (4, underline), (8, strikeout)]
