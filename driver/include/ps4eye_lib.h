#pragma once

#if (defined(_WIN32) || defined(_WIN64))
	#define PS4EYE_WIN

	#ifdef PS4EYE_DLL
		#ifdef PS4EYE_EXPORT_DLL
		#define PS4EYE_API __declspec(dllexport)
	#else 
		#define PS4EYE_API __declspec(dllimport)
		#endif
	#else
		#define PS4EYE_API
	#endif
#else
	#define PS4EYE_NIX

	#ifdef PS4EYE_DLL
	//#ifdef PS4EYE_EXPORT_DLL
		#define PS4EYE_API __attribute__ ((visibility ("default")))
		//#else 
		//	#define PS4EYE_API __attribute__ ((visibility ("default")))
		//#endif
	#else
		#define PS4EYE_API
	#endif
#endif