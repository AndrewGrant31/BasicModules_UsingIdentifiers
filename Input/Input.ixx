export module GitHub_Repository_As_Namespace:Input;

import :AcceptableList;
import Includes;

namespace GRAN = GitHub_Repository_As_Namespace;

export namespace GitHub_Repository_As_Namespace
{
	namespace Input
	{
		class IsValid
		{
		private:
			std::string input_{};

			bool IsAcceptable(const char& _)
			{
				return std::find(
					GRAN::Private::acceptableChars.begin(), GRAN::Private::acceptableChars.end(), _) ==
					GRAN::Private::acceptableChars.end() ?
					false : true;
			}

			bool Compare(const char& first, const char& second)
			{
				if (first == GRAN::Private::period_ and 
					second == GRAN::Private::space_)
				{
					return false;
				}
				return IsAcceptable(first) == IsAcceptable(second);
			}

			auto Validate(const std::string& _) noexcept -> const auto
			{
				if (not _.empty())
				{
					char previous{};

					for (auto& c : _)
					{
						switch (std::isalpha(c))
						{
						case true:
							previous = char{};
							break;
						case false:
							if (IsAcceptable(c) and not Compare(previous, c))
							{
								previous = c;
								break;
							}
							else
								return std::string{};
						}
					}
				}

				return _;
			}

		public:
			IsValid(const std::string& _) :
				input_{ Validate(_) }
			{

			}

			auto ToString() noexcept -> const auto
			{
				return input_;
			}
		};
	}
}