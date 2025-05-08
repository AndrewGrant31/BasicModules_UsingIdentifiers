export module GitHub_Repository_As_Namespace:Exclamation;

import Includes;

export namespace GitHub_Repository_As_Namespace
{
	namespace Variables
	{
		auto Exclamation() noexcept -> const auto
		{
			return std::string { "!" };
		}
	}
}
