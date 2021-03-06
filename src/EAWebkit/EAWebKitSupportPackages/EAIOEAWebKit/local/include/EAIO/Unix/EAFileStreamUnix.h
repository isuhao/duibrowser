/*
Copyright (C) 2009-2010 Electronic Arts, Inc.  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

1.  Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
2.  Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
3.  Neither the name of Electronic Arts, Inc. ("EA") nor the names of
    its contributors may be used to endorse or promote products derived
    from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY ELECTRONIC ARTS AND ITS CONTRIBUTORS "AS IS" AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL ELECTRONIC ARTS OR ITS CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/////////////////////////////////////////////////////////////////////////////
// EAFileStreamUnix.h
//
// Copyright (c) 2003, Electronic Arts Inc. All rights reserved.
// Created by Paul Pedriana
//
/////////////////////////////////////////////////////////////////////////////


#ifndef EAIO_EAFILESTREAM_UNIX_H
#define EAIO_EAFILESTREAM_UNIX_H


#include <EAIO/EAFileStream.h>
#include <EAIO/EAFileBase.h>
#include <EAIO/PathString.h>
#include <stddef.h>



namespace EA
{
    namespace IO
    {
        class EAIO_API FileStream : public IStream
        {
        public:
            enum { kTypeFileStream = 0x34722300 };

            enum Share
            {
                kShareNone   = 0x00,     /// No sharing.
                kShareRead   = 0x01,     /// Allow sharing for reading.
                kShareWrite  = 0x02,     /// Allow sharing for writing.
                kShareDelete = 0x04      /// Allow sharing for deletion.
            };

            enum UsageHints
            {
                kUsageHintNone       = 0x00,
                kUsageHintSequential = 0x01,
                kUsageHintRandom     = 0x02
            };

        public:
            FileStream(const char8_t* pPath8 = NULL);
            FileStream(const char16_t* pPath16);

            // FileStream
            // Does not copy information related to an open file, such as the file handle.
            FileStream(const FileStream& fs);

            virtual ~FileStream();

            // operator=
            // Does not copy information related to an open file, such as the file handle.
            FileStream& operator=(const FileStream& fs);

            virtual int       AddRef();
            virtual int       Release();

            virtual void      SetPath(const char8_t* pPath8);
            virtual void      SetPath(const char16_t* pPath16);
            virtual size_t    GetPath(char8_t* pPath8, size_t nPathCapacity);
            virtual size_t    GetPath(char16_t* pPath16, size_t nPathCapacity);

            virtual bool      Open(int nAccessFlags = kAccessFlagRead, int nCreationDisposition = kCDDefault, int nSharing = kShareRead, int nUsageHints = kUsageHintNone); 
            virtual bool      Close();
            virtual uint32_t  GetType() const { return kTypeFileStream; }
            virtual int       GetAccessFlags() const;
            virtual int       GetState() const;

            virtual size_type GetSize() const;
            virtual bool      SetSize(size_type size);

            virtual off_type  GetPosition(PositionType positionType = kPositionTypeBegin) const;
            virtual bool      SetPosition(off_type position, PositionType positionType = kPositionTypeBegin);

            virtual size_type GetAvailable() const;

            virtual size_type Read(void* pData, size_type nSize);
            virtual bool      Write(const void* pData, size_type nSize);
            virtual bool      Flush();

        protected:
            typedef EA::IO::Path::PathString8 PathString8;

            int         mnFileHandle;
            PathString8 mPath8;                     /// Path for the file.
            int         mnRefCount;                 /// Reference count, which may or may not be in use.
            int         mnAccessFlags;              /// See enum AccessFlags.
            int         mnCD;                       /// See enum CD (creation disposition).
            int         mnSharing;                  /// See enum Share.
            int         mnUsageHints;               /// See enum UsageHints.
            mutable int mnLastError;                /// Used for error reporting.

        }; // class FileStream

    } // namespace IO

} // namespace EA

#endif  // #ifndef EAIO_EAFILESTREAM_UNIX_H











