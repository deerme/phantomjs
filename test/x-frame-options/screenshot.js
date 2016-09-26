
var page = require('webpage').create(),
    system = require('system'),
    t, address;
 
if (system.args.length === 2) {
    console.log('Usage: screenshot.js <some URL>');
    phantom.exit(1);
} else {
    t = Date.now();
    address = system.args[1];
    file = system.args[2];
    page.open(address, function (status) {
        if (status !== 'success') {
            console.log('FAIL to load the address');
        } else {
            t = Date.now() - t;
            console.log('Page title is ' + page.evaluate(function () {
                return document.title;
            }));
            console.log('Loading time ' + t + ' msec');
        }
	page.render(file);
        phantom.exit();
    });
}
