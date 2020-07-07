'use strict';


export var scriptProperties = createScriptProperties()
	// Whether you want a 24h or 12h style format
	.addCheckbox({
		name: 'use24hFormat',
		label: 'ui_editor_properties_use_24h_format',
		value: true
	})
	// Whether you want to see the seconds or not
	.addCheckbox({
		name: 'showSeconds',
		label: 'ui_editor_properties_show_seconds',
		value: false
	})
	// This will be used to separate each element
	.addText({
		name: 'delimiter',
		label: 'ui_editor_properties_delimiter',
		value: ':'
	})
	.finish();

/**
 * @param {String} value (for property 'text')
 */
export function update(value) {
	let time = new Date();
	var d_year = time.getFullYear();
	var d_day = time.getDate();
	var d_month = time.getMonth()+1;
	var hours = time.getHours();
	var d_week = time.getDay();

	var d_week_arr = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];

	let amPM = " AM";

	if (!scriptProperties.use24hFormat) {
		/*
		hours %= 12;
		if (hours == 0) {
			hours = 12;
		}
		*/		
		if (hours == 0){
			hours = 12;
		}else if(hours > 12){
			hours -= 12;
			amPM = " PM";
		}
	}
	hours = ("00" + hours).slice(-2);
	let minutes = ("00" + time.getMinutes()).slice(-2);
	value = hours + scriptProperties.delimiter + minutes;
	
	//d_year = ("0000" + d_year).slice(-4);
	d_day = ("00" + d_day).slice(-2);
	d_month = ("00" + d_month).slice(-2);

	if (scriptProperties.showSeconds) {
		let seconds = ("00" + time.getSeconds()).slice(-2);
		value += scriptProperties.delimiter + seconds +amPM + "\n" + d_year +"-"+ d_month +"-"+d_day +"\n" + d_week_arr[d_week];
	}
	
	return value;
}
