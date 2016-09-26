# PhantomJS 2.1.1 with X-Frame-Options disabled in QtWebKit

This version of phantomjs contain the rule "X-Frame-Options" disabled in the source of QtWebKit, this allows, add any url (regardless of the domain) in a frame / iframe object without respect the rule "RFC 7034 HTTP Header Field X-Frame-Options", remember, this is a fork of (https://github.com/ariya/phantomjs) with that change.

## Example

To check the differences, let's try running a script that captures the screen of a page containing an iframe to google.com (domain having an x-frame-options denying iframe rendering).

        ```        
        cd test/x-frame-options/
        phantomjs screenshot.js test-iframe.html phantomjs-without-mod.png
        ../../bin/phantomjs  screenshot.js test-iframe.html phantomjs-with-mod.png
        end

Result with original phantomjs

![alt tag](https://raw.githubusercontent.com/deerme/phantomjs/master/test/x-frame-options/phantomjs-without-mod.png)

Result with phantomjs mod

![alt tag](https://raw.githubusercontent.com/deerme/phantomjs/master/test/x-frame-options/phantomjs-with-mod.png)

## Little change in QtWebKit

The change was in the file ./Source/WebCore/loader/FrameLoader.cpp, specific, in the method FrameLoader::shouldInterruptLoadForXFrameOptions, which now always returns false, therefore, ignores the rules of x-frame-options.

Sorry if I make mistakes in my basic English.
