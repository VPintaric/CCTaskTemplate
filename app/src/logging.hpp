#ifndef CCTASK_LOGGING_HPP
#define CCTASK_LOGGING_HPP

#include <cstdio>

#ifdef NDEBUG
#   define LOG( format, args... )
#   define WARN( format, args... )
#   define ERR( format, args... )
#else
#   define LOG( format, args... )  fprintf( stdout, "INFO %s:%d: %s: " format "\n", __FILE__, __LINE__, __func__, ##args )
#   define WARN( format, args... ) fprintf( stderr, "WARNING %s:%d: %s: " format "\n", __FILE__, __LINE__, __func__, ##args )
#   define ERR( format, args... )  fprintf( stderr, "ERROR %s:%d: %s: " format "\n", __FILE__, __LINE__, __func__, ##args )
#endif

#endif //CCTASK_LOGGING_HPP
