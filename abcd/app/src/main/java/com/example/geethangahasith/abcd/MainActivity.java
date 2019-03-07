package com.example.geethangahasith.abcd;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.MotionEvent;
import android.view.View;
import android.widget.Button;

import java.io.IOException;
import java.util.concurrent.ExecutionException;

public class MainActivity extends AppCompatActivity {
Button D0on,D0off,D1on,D1off,D2on,D2off,D4on,D4off,D5on,D5off;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        D0on = (Button) findViewById(R.id.DOon);
        D0off = (Button) findViewById(R.id.D0off);
        D1on = (Button) findViewById(R.id.D1on);
        D1off = (Button) findViewById(R.id.D1off);
        D2on = (Button) findViewById(R.id.D2on);
        D2off = (Button) findViewById(R.id.D2off);
        D4on = (Button) findViewById(R.id.D4on);
        D4off = (Button) findViewById(R.id.D4off);
        D5on = (Button) findViewById(R.id.D5on);
        D5off = (Button) findViewById(R.id.D5off);


        D0on.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                HttpHelper helper = new HttpHelper();
                String result = "";
                String endpoit="http://192.168.1.4/D0=ON";
                if (event.getAction() == MotionEvent.ACTION_DOWN) //MotionEvent.ACTION_DOWN is when you hold a button down
                {
                    try {
                        result = helper.execute(endpoit).get();
                    } catch (InterruptedException | ExecutionException e) {
                        e.printStackTrace();
                    } }
                    return false; }});

        D0off.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                HttpHelper helper = new HttpHelper();
                String result = "";
                String endpoit="http://192.168.1.4/D0=OFF";
                if (event.getAction() == MotionEvent.ACTION_DOWN) //MotionEvent.ACTION_DOWN is when you hold a button down
                {
                    try {
                        result = helper.execute(endpoit).get();
                    } catch (InterruptedException | ExecutionException e) {
                        e.printStackTrace();
                    } }
                    return false; }});


        D1on.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                HttpHelper helper = new HttpHelper();
                String result = "";
                String endpoit="http://192.168.1.4/D1=ON";
                if (event.getAction() == MotionEvent.ACTION_DOWN) //MotionEvent.ACTION_DOWN is when you hold a button down
                {
                    try {
                        result = helper.execute(endpoit).get();
                    } catch (InterruptedException | ExecutionException e) {
                        e.printStackTrace();
                    } }
                return false; }});

        D1off.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                HttpHelper helper = new HttpHelper();
                String result = "";
                String endpoit="http://192.168.1.4/D1=OFF";
                if (event.getAction() == MotionEvent.ACTION_DOWN) //MotionEvent.ACTION_DOWN is when you hold a button down
                {
                    try {
                        result = helper.execute(endpoit).get();
                    } catch (InterruptedException | ExecutionException e) {
                        e.printStackTrace();
                    } }
                return false; }});

        D2on.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                HttpHelper helper = new HttpHelper();
                String result = "";
                String endpoit="http://192.168.1.4/D2=ON";
                if (event.getAction() == MotionEvent.ACTION_DOWN) //MotionEvent.ACTION_DOWN is when you hold a button down
                {
                    try {
                        result = helper.execute(endpoit).get();
                    } catch (InterruptedException | ExecutionException e) {
                        e.printStackTrace();
                    } }
                return false; }});

        D2off.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                HttpHelper helper = new HttpHelper();
                String result = "";
                String endpoit="http://192.168.1.4/D2=OFF";
                if (event.getAction() == MotionEvent.ACTION_DOWN) //MotionEvent.ACTION_DOWN is when you hold a button down
                {
                    try {
                        result = helper.execute(endpoit).get();
                    } catch (InterruptedException | ExecutionException e) {
                        e.printStackTrace();
                    } }
                return false; }});

        D4on.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                HttpHelper helper = new HttpHelper();
                String result = "";
                String endpoit="http://192.168.1.4/D4=ON";
                if (event.getAction() == MotionEvent.ACTION_DOWN) //MotionEvent.ACTION_DOWN is when you hold a button down
                {
                    try {
                        result = helper.execute(endpoit).get();
                    } catch (InterruptedException | ExecutionException e) {
                        e.printStackTrace();
                    } }
                return false; }});

        D4off.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                HttpHelper helper = new HttpHelper();
                String result = "";
                String endpoit="http://192.168.1.4/D4=OFF";
                if (event.getAction() == MotionEvent.ACTION_DOWN) //MotionEvent.ACTION_DOWN is when you hold a button down
                {
                    try {
                        result = helper.execute(endpoit).get();
                    } catch (InterruptedException | ExecutionException e) {
                        e.printStackTrace();
                    } }
                return false; }});

        D5on.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                HttpHelper helper = new HttpHelper();
                String result = "";
                String endpoit="http://192.168.1.4/D5=ON";
                if (event.getAction() == MotionEvent.ACTION_DOWN) //MotionEvent.ACTION_DOWN is when you hold a button down
                {
                    try {
                        result = helper.execute(endpoit).get();
                    } catch (InterruptedException | ExecutionException e) {
                        e.printStackTrace();
                    } }
                return false; }});

        D5off.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                HttpHelper helper = new HttpHelper();
                String result = "";
                String endpoit="http://192.168.1.4/D5=OFF";
                if (event.getAction() == MotionEvent.ACTION_DOWN) //MotionEvent.ACTION_DOWN is when you hold a button down
                {
                    try {
                        result = helper.execute(endpoit).get();
                    } catch (InterruptedException | ExecutionException e) {
                        e.printStackTrace();
                    } }
                return false; }});



    }
}
