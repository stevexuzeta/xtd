/// @file
/// @brief Contains xtd::forms::fourteen_segment_display control.
/// @copyright Copyright (c) 2024 Gammasoft. All rights reserved.
#pragma once
#include "seven_segment_display.h"

namespace xtd {
  namespace forms {
    /// @brief Represents a nine segment display class.
    /// @par Header
    /// @code #include <xtd/forms/fourten_segment_display> @endcode
    /// @par Namespace
    /// xtd::forms
    /// @par Library
    /// xtd.forms
    /// @ingroup xtd_forms controls
    /// @par Appearance
    /// |       | Windows                                               | macOS                                                 | Gnome                                                 |
    /// | ----- | ----------------------------------------------------- | ----------------------------------------------------- | ----------------------------------------------------- |
    /// | Light |  @image html control_fourteen_segment_display_w.png   |  @image html control_fourteen_segment_display_m.png   |  @image html control_fourteen_segment_display_g.png   |
    /// | Dark  |  @image html control_fourteen_segment_display_wd.png  |  @image html control_fourteen_segment_display_md.png  |  @image html control_fourteen_segment_display_gd.png  |
    /// @par Examples
    /// The following code example demonstrates the use of fourteen segment display control.
    /// @include fourteen_segment_display.cpp
    class fourteen_segment_display : public seven_segment_display {
      struct data;
      
    public:
      /// @name Constructors
      
      /// @{
      /// @brief Initialize a new instance of fourteen_segment_display class.
      fourteen_segment_display();
      /// @}
      
      /// @name Properties
      
      /// @{
      /// @brief Sets thickness of segment.
      /// @param value A int32 that represent the segment thickness.
      /// @return Current seven_segment_display.
      int32 thickness() const noexcept override;
      /// @brief Sets thickness of segment.
      /// @param value A int32 that represent the segment thickness.
      /// @return Current seven_segment_display.
      seven_segment_display& thickness(int32 value) override;
      /// @}
      
      /// @name Methods
      
      /// @{
      using control::create;
      /// @brief A factory to create an xtd::forms::fourteen_segment_display with specified color, location, size, and name.
      /// @param segments A dots_collection that represent all dots status.
      /// @param show_back_segment true if background segments are shown; otherwise false
      /// @param location A xtd::drawing::point that represent location of the xtd::forms::fourteen_segment_display.
      /// @param size A xtd::drawing::size that represent size of the xtd::forms::fourteen_segment_display.
      /// @param name The name of the xtd::forms::fourteen_segment_display.
      /// @return New xtd::forms::fourteen_segment_display created.
      static fourteen_segment_display create(xtd::forms::segments segments, bool show_back_segment = true, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string);
      /// @brief A factory to create an xtd::forms::fourteen_segment_display with specified parent, color, location ,size, and name.
      /// @param parent The parent that contains the new created xtd::forms::fourteen_segment_display.
      /// @param segments A xtd::forms::segments combination that represent fourteen_segment_display.
      /// @param show_back_segment true if background segments are shown; otherwise false
      /// @param location A xtd::drawing::point that represent location of the xtd::forms::fourteen_segment_display.
      /// @param size A xtd::drawing::size that represent size of the xtd::forms::fourteen_segment_display.
      /// @param name The name of the xtd::forms::fourteen_segment_display.
      /// @return New xtd::forms::fourteen_segment_display created.
      static fourteen_segment_display create(const control& parent, xtd::forms::segments segments, bool show_back_segment = true, const drawing::point& location = {-1, -1}, const drawing::size& size = {-1, -1}, const xtd::ustring& name = xtd::ustring::empty_string);
      /// @}
      
    protected:
      /// @name Protected methods
      
      /// @{
      void draw_back_digit(drawing::graphics& graphics) override;
      
      void draw_segment_g(drawing::graphics& graphics, const drawing::color& color) override;
      
      /// @brief Draw segment g1 on specified graphics with specified color.
      /// @param graphics A xtd::drawing::graphics from on_paint method.
      /// @param color A xtd::drawing::color used to draw segment.
      virtual void draw_segment_g1(drawing::graphics& graphics, const drawing::color& color);
      
      /// @brief Draw segment g2 on specified graphics with specified color.
      /// @param graphics A xtd::drawing::graphics from on_paint method.
      /// @param color A xtd::drawing::color used to draw segment.
      virtual void draw_segment_g2(drawing::graphics& graphics, const drawing::color& color);
      
      /// @brief Draw segment h on specified graphics with specified color.
      /// @param graphics A xtd::drawing::graphics from on_paint method.
      /// @param color A xtd::drawing::color used to draw segment.
      virtual void draw_segment_h(drawing::graphics& graphics, const drawing::color& color);
      
      /// @brief Draw segment ion specified graphics with specified color.
      /// @param graphics A xtd::drawing::graphics from on_paint method.
      /// @param color A xtd::drawing::color used to draw segment.
      virtual void draw_segment_i(drawing::graphics& graphics, const drawing::color& color);
      
      /// @brief Draw segment j on specified graphics with specified color.
      /// @param graphics A xtd::drawing::graphics from on_paint method.
      /// @param color A xtd::drawing::color used to draw segment.
      virtual void draw_segment_j(drawing::graphics& graphics, const drawing::color& color);
      
      /// @brief Draw segment k on specified graphics with specified color.
      /// @param graphics A xtd::drawing::graphics from on_paint method.
      /// @param color A xtd::drawing::color used to draw segment.
      virtual void draw_segment_k(drawing::graphics& graphics, const drawing::color& color);
      
      /// @brief Draw segment l on specified graphics with specified color.
      /// @param graphics A xtd::drawing::graphics from on_paint method.
      /// @param color A xtd::drawing::color used to draw segment.
      virtual void draw_segment_l(drawing::graphics& graphics, const drawing::color& color);
      
      /// @brief Draw segment m on specified graphics with specified color.
      /// @param graphics A xtd::drawing::graphics from on_paint method.
      /// @param color A xtd::drawing::color used to draw segment.
      virtual void draw_segment_m(drawing::graphics& graphics, const drawing::color& color);
      
      void on_paint(paint_event_args& e) override;
      /// @}
      
    private:
      std::shared_ptr<data> data_;
    };
  }
}
