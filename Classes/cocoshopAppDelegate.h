/*
 * cocoshop
 *
 * Copyright (c) 2011 Andrew
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#import "cocos2d.h"
#import "CSMacGLView.h"

@class CSObjectController;

@interface cocoshopAppDelegate : NSObject <NSApplicationDelegate>
{
	NSWindow	*window_;
	CSMacGLView	*glView_;
	CSObjectController *controller_;
	
	BOOL appIsRunning_;
	NSString *filenameToOpen_;
}

@property (assign) IBOutlet NSWindow	*window;
@property (assign) IBOutlet CSMacGLView	*glView;
@property (assign) IBOutlet CSObjectController *controller;
@property (readwrite, copy) NSString *filenameToOpen;
@property (readwrite) BOOL appIsRunning;

- (IBAction)toggleFullScreen:(id)sender;
- (BOOL)application:(NSApplication *)theApplication openFile:(NSString *)filename;

@end
