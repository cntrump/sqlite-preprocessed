//
//  sqlite-umbrella.h
//  sqlite-preprocessed
//
//  Created by v on 2020/8/29.
//  Copyright © 2020 sqlite. All rights reserved.
//

#ifndef sqlite_umbrella_h
#define sqlite_umbrella_h

#define SQLITE_CORE                     1

#define SQLITE_DQS                      0
#define SQLITE_THREADSAFE               0
#define SQLITE_DEFAULT_MEMSTATUS        0
#define SQLITE_DEFAULT_WAL_SYNCHRONOUS  1
#define SQLITE_LIKE_DOESNT_MATCH_BLOBS  1
#define SQLITE_MAX_EXPR_DEPTH           0
#define SQLITE_OMIT_DECLTYPE            1
#define SQLITE_OMIT_DEPRECATED          1
#define SQLITE_OMIT_PROGRESS_CALLBACK   1
#define SQLITE_OMIT_SHARED_CACHE        1
#define SQLITE_USE_ALLOCA               1
#define SQLITE_OMIT_AUTOINIT            1

#define SQLITE_ENABLE_MEMSYS5           1
#define SQLITE_ENABLE_JSON1             1
#define SQLITE_ENABLE_FTS5              1
#define SQLITE_ENABLE_RTREE             1

#define HAVE_FDATASYNC                  1
#define HAVE_GMTIME_R                   1
#define HAVE_ISNAN                      1
#define HAVE_LOCALTIME_R                1
#define HAVE_LOCALTIME_S                1
#define HAVE_MALLOC_USABLE_SIZE         1
#define HAVE_USLEEP                     1
#define HAVE_UTIME                      1

#import "sqlite3.h"

#endif /* sqlite_umbrella_h */
