export module GitHub_Repository_As_Namespace:Salutation;

import Includes;

export namespace GitHub_Repository_As_Namespace
{
	namespace Variables
	{
		auto Salutation() noexcept -> const auto
		{
			return std::string{ "Hello " };
		}
	}
}