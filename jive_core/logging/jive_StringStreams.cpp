#pragma once

namespace juce
{
    String& operator<<(String& str, const Colour& colour)
    {
        return str << "juce::Colour { 0x" << colour.toDisplayString(true) << " }";
    }

    String& operator<<(String& str, const Font& font)
    {
        return str << "juce::Font { \"" << font.toString() << "\" }";
    }

    String& operator<<(String& str, const Image& image)
    {
        return str << "juce::Image { "
                   << image.getWidth()
                   << ", "
                   << image.getHeight()
                   << " }";
    }

    String& operator<<(String& str, const var& value)
    {
        if (value.isString())
            return str << "juce::var{ \"" << value.toString() << "\" }";

        return str << "juce::var{ " << value.toString() << " }";
    }

    String& operator<<(String& str, const Time& time)
    {
        static constexpr auto includeDividers = true;
        return str << "juce::Time{ "
                   << time.toISO8601(includeDividers)
                   << " }";
    }

    String& operator<<(String& str, long double value)
    {
        return str << juce::String{ static_cast<double>(value) };
    }
} // namespace juce
