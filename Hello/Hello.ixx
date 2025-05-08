export module GitHub_Repository_As_Namespace:Hello;

import :Exclamation;
import :Salutation;
import :World;
import Includes;

export namespace GitHub_Repository_As_Namespace
{
	namespace Hello
	{
		class HelloWorld
		{
		private:
			std::string who_;

			auto Join ( const std::string& first_, const std::string& second_ ) noexcept -> const auto
			{
				// use automatic discards - we don't use this variable,
				// and we certainly don't need it hanging around causing 
				// trouble after we are done.
				std::string _ { first_ };
				_.append ( second_ );
				return _;
			}

			auto AddExclamation ( const std::string& _ ) noexcept -> const auto
			{
				return _.ends_with ( std::string { GitHub_Repository_As_Namespace::Variables::Exclamation ( ) } ) ?
					_ : Join ( _, GitHub_Repository_As_Namespace::Variables::Exclamation ( ) );
			}

			auto Set ( const std::string& _ ) noexcept -> const std::string
			{
				return _.empty ( ) ? GitHub_Repository_As_Namespace::Variables::World ( ) : AddExclamation ( _ );
			}

			auto Who ( ) noexcept -> const auto
			{
				return who_;
			}

			auto ConstructGreeting ( ) noexcept -> const auto
			{
				return Join ( GitHub_Repository_As_Namespace::Variables::Salutation ( ), Who ( ) );
			}

		public:
			HelloWorld ( const std::string& _ = std::string { "" } ) :
				who_ { _ }
			{

			}

			auto Greetings ( ) noexcept -> const std::string
			{
				return ConstructGreeting ( );
			}
		};
	}
}